//
// Created by maestro on 03.06.2021.
//

#ifndef INC_31_CONTAINER_H
#define INC_31_CONTAINER_H

#include "Shoes.h"

bool predG(Shoes *a);

bool predS(Shoes *a);

bool functorT(Shoes* A, Shoes* B);

bool predM(Shoes *a);



template<typename T>
class List{
    vector<T*> shoes;
public:
    List() = default;
    List(List &copy) = default;

    virtual ~List(){
        while (!shoes.empty()){
            shoes.pop_back();
        }
        shoes.clear();
        shoes.shrink_to_fit();
    }


    typedef typename std::vector<T*>::iterator iterator;

    iterator begin(){
        return shoes.begin();
    }

    iterator end(){
        return shoes.end();
    }

    void addShoes( Shoes* shoe){
        this->shoes.push_back(shoe->clone());
    }

    void addItem( T& item){
        this->shoes.push_back(item);
    }

    vector<T*> getShoes (){
        return this->shoes;
    }



    void ShowAll(){
        for(Shoes *o : shoes){
            o->Print();
            cout << endl;
        }
    }

    vector<Boots*> More39() {
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

    vector<Shoes*>  NikePuma() {
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

    vector<Sneakers*>  CheapRunningShoes(){
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

    void SortByPrice(bool flag){
        std::sort(shoes.begin(), shoes.end(), functorT);
        if(!flag){
            std::reverse(shoes.begin(), shoes.end());
        }
    }



};

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

#endif //INC_31_CONTAINER_H
