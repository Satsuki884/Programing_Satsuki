//
// Created by maestro on 02.06.2021.
//

#include "Container.h"


List::List() {}

List::List(List &copy) :index(copy.index), shoes(copy.shoes) {}

List::~List(){
    while (!shoes.empty()){
        shoes.pop_back();
    }
    shoes.clear();
    shoes.shrink_to_fit();
}


void List::DeleteAll(){
    while (!shoes.empty()){
        shoes.pop_back();
    }
    shoes.clear();
    shoes.shrink_to_fit();
    index = -1;
}


void List::addShoes(Shoes *shoes) {
    index += 1;
    if (index >= 255) {
        return;
    }
    this->shoes.push_back(shoes->clone());
}


vector<Shoes*> List::getShoes(){
    return this->shoes;
}

void List::ShowAll(){
    for (int i = 0; i <= this->index; ++i) {
        cout << "\33[1:33mShoes #" << i+1 << ":\33[0m";
        shoes[i]->Print();
        cout << endl;
    }
}

void List::DeleteElement(int index){
    if (index > shoes.size()){
        index = shoes.size();
    } else if(index < 0){
        index = 0;
    }
    vector<Shoes*>::iterator pos = shoes.begin() + index;
    shoes.erase(pos);
    this->index--;
}


bool predG(Shoes *a)
{
    if (a->GetType() == 'L') {
        auto *Le = (Sneakers *) a->clone();
        if (Le->getInsole().getSize() >=39) {
            delete Le;
            return true;
        } else {
            delete Le;
            return false;
        }
    } else{
        return false;
    }
}

vector<Boots*> List::More39() {
    vector<Boots*> res;
    bool flag = true;
    auto iter = shoes.begin();
    while (true) {
        iter = std::find_if(iter, this->shoes.end(), predG);
        if(*iter == NULL){
            break;
        }
        flag = false;
        res.push_back((Boots*)*iter);
        ((Boots*)*iter)->Print();
        cout << endl;
        iter++;
    }
    if (flag){
        cout << "ERROR: Nothing found" << endl;
    }
    return res;
}

bool predS(Shoes *a)
{
    if (a->GetType() == 'L') {
        auto *Le = (Sneakers *) a->clone();
        if (Le->getRunning()) {
            delete Le;
            return true;
        } else {
            delete Le;
            return false;
        }
    } else {
        return false;
    }
}

vector<Sneakers*>  List::CheapRunningShoes(){
    vector<Sneakers*> res;
    bool flag = true;
    auto iter = shoes.begin();
    //while (*iter) {
        iter = std::find_if(iter, this->shoes.end(), predS);
        if(*iter == NULL){
            cout << "ERROR: Nothing found" << endl;
        }
        flag = false;
        ((Sneakers*)*iter)->Print();
        cout << endl;
        res.push_back((Sneakers*)*iter);
        iter++;
    //}
    if (flag){
        cout << "ERROR: Nothing found" << endl;
    }
    return res;
}

bool functorT(Shoes* A, Shoes* B){
    bool result = false;

    if (A->GetType() == 'L' && B->GetType() == 'L') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp2 = (Sneakers *) B->clone();
        if (temp1->getPrice() < temp2->getPrice()) {
            result = true;
        }
        delete temp1;
        delete temp2;
    }
    if (A->GetType() == 'F' && B->GetType() == 'F') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp4 = (Boots *) B->clone();
        if (temp3->getPrice() < temp4->getPrice()) {
            result = true;
        }
        delete temp4;
        delete temp3;
    }
    if (A->GetType() == 'F' && B->GetType() == 'L') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp1 = (Sneakers *) B->clone();
        if (temp3->getPrice() < temp1->getPrice()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }

    if (A->GetType() == 'L' && B->GetType() == 'F') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp3 = (Boots *) B->clone();
        if (temp1->getPrice() < temp3->getPrice()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }
    return result;
}

bool functorF(Shoes* A, Shoes* B){
    bool result = false;
    if (A->GetType() == 'L' && B->GetType() == 'L') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp2 = (Sneakers *) B->clone();
        if (temp1->getPrice() > temp2->getPrice()) {
            result = true;
        }
        delete temp1;
        delete temp2;
    }
    if (A->GetType() == 'F' && B->GetType() == 'F') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp4 = (Boots *) B->clone();
        if (temp3->getPrice() > temp4->getPrice()) {
            result = true;
        }
        delete temp3;
        delete temp4;
    }
    if (A->GetType() == 'F' && B->GetType() == 'L') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp1 = (Sneakers *) B->clone();
        if (temp3->getPrice() > temp1->getPrice()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }

    if (A->GetType() == 'L' && B->GetType() == 'F') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp3 = (Boots *) B->clone();
        if (temp1->getPrice() > temp3->getPrice()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }

    return result;
}

void List::SortByPrice(bool flag) {
    if (flag) {
        std::sort(shoes.begin(), shoes.end(), functorT);
    } else{
        std::sort(shoes.begin(), shoes.end(), functorF);
    }
}



bool predM(Shoes *a)
{

    auto *Le = (Sneakers*) a->clone();
    if((Le->getOrtopedic() == 1 ) && ( Le->getBrand() == Brand::nike || Le->getBrand() == Brand::puma)){
        delete Le;
        return true;
    } else{
        delete Le;
        return false;
    }
}
bool predD(Shoes *a)
{

    auto *De = (Boots*) a->clone();
    if((De->getOrtopedic() == 1) && (De->getBrand() == Brand::nike || De->getBrand() == Brand::puma )){
        delete De;
        return true;
    } else{
        delete De;
        return false;
    }
}

vector<Shoes*>  List::NikePuma() {
    vector<Shoes*> temp;
    auto iter = shoes.begin();
    auto iter2 = shoes.begin();
    bool flag = true;
    while (*iter) {
        iter = std::find_if(iter, this->shoes.end(), predM);
        if(*iter == NULL){
            break;
        }
        flag = false;
        ((Sneakers*)*iter)->Print();
        cout << endl;
        temp.push_back((Sneakers*)*iter);
        iter++;
    }
    if (flag){
        cout << "ERROR: Nothing found" << endl;
    }
    return temp;
}



void List::InsertList(List &in) {
    this->shoes.reserve(this->index + in.index);
    auto iter = this->shoes.end();
    for (int i = 0; i < in.index; ++i) {
        this->shoes.insert(iter + i, in.shoes[i]);
    }
    this->index += in.index;

}


//------------------------------------------------\\

void ShowMap(const map<string, set<string>>& m3){
    std::for_each(m3.begin(), m3.end(), [&](const std::pair<string, set<string>>& pair){
        auto iter = pair.first;
        cout.width(20);
        cout << iter << ": ";
        cout.width(5);
        for(const auto &elem: pair.second){
            if (m3.rbegin()->first == pair.first && pair.second.upper_bound(elem) == pair.second.end()) {
                cout << elem << ".";
            } else if(pair.second.upper_bound(elem) == pair.second.end()) {
                cout << elem << ";";
            } else{
                cout << elem << ", ";
            }
        }
        cout << endl;
    });
}

void Mapp(){
    map<string, set<string>> m1, m2, m3;

    m1 = {
            { "Украина", { "Харьков", "Киев" } },
            { "Россия", { "Москва", "Белгород" } },
            { "Беларусь", { "Минск", "Бобруйск" } },
    };
    m2 = {
            { "Польша", {  "Варшава" } },
            { "Россия", { "Питер" } },
            { "Украина", { "Харьков", "Запорожье" } },
    };
    m3 = m1;

    std::for_each(m2.begin(), m2.end(), [&](const std::pair<string, set<string>>& pair){
        auto iter = m3.find(pair.first);
        if(iter == m3.end()){
            m3.insert(pair);
        } else{
            iter->second.insert(pair.second.begin(), pair.second.end());
        }
    });

    cout.width(12);
    cout << "Map 1:" << endl;
    ShowMap(m1);
    cout << endl;

    cout.width(12);
    cout << "Map 2:" << endl;
    ShowMap(m2);
    cout << endl;

    cout.width(12);
    cout << "Result map:" << endl;
    ShowMap(m3);
    cout << endl;

}