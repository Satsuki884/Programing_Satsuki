/**
 * @file controller.cpp
 * @brief File that performs methods of controller class
 *
 * @author Klymenko S.
 * @date 29-may-2021
 * @version 1.0
 */

#include "Controller.h"

List* Controller::getlist() {
    return &list;
}


int Controller::reg_func(std::string * str){
    regex_t regex;
    std::regex regular("^[А-ЯЁA-Z0-9][-a-zA-Z0-9а-яёА-ЯЁ.,;!?: ]*$");
    std::cmatch result;
    if(std::regex_match(str->c_str(), result, regular )){
        return 1;
    } else return 0;
}

int Controller::reg(std::string * str){
    regex_t regex;
    std::regex regular("[а-яА-Яa-zA-Z.]+");
    std::cmatch result;
    if(std::regex_match(str->c_str(), result, regular )){
        return 1;
    } else return 0;
}

int Controller::reg2(std::string * str){
    std::regex regular("[а-яА-Яa-zA-Z.]+");
    std::cmatch result;
    if(std::regex_match(str->c_str(), result, regular )){
        return 1;
    } else return 0;
}

void Controller::ReadFromFileSneakers() {
    std::ifstream file("Sneakers.txt");
    std::string line;
    int i =0;
    if (file.is_open()) {
//        cout<<"File opened for reading!!!"<< endl;
        while (getline(file, line)) {
            if(!line.empty()){
                addObjectFromLineSneakers(line);
            }
            i++;
        }
    }
    file.close();

}

void Controller::ReadFromFileBoots() {
    std::ifstream file("Boots.txt");
    std::string line;
    int i =0;
    if (file.is_open()) {
        while (getline(file, line)) {
            if(!line.empty()){
                addObjectFromLineBoots(line);
            }
            i++;
        }
    }
    file.close();

}

void Controller::addObjectFromLineSneakers(std::string line){
    std::stringstream ss;
    std::string ortopedic;
    std::string running;
    std::string model_name;
    std::string brand_name;
    std::string purpose_name;
    Brand brand;
    Purpose purpose;
    std::string usd;
    std::string size;
    std::string length;
    ss<<line;
    getline(ss, model_name, ' ');
    int a = reg_func(&model_name);
    int b = reg(&model_name);
    int c = reg2(&model_name);
    if (a == 0) {
        if(c==0){
            cout<<"Pattern not foundC.\n";
            return ;
        }
        cout<<"Pattern found.\n";
        if(b==0){
            cout<<"Reading from file:"<< &model_name<<endl;
        }
    }
    getline(ss, brand_name, ' ');
    a = reg_func(&brand_name);
    b = reg(&brand_name);
    c = reg2(&brand_name);
    if (a == 0) {
        if(c==0){
            cout<<"Pattern not foundC.\n";
            return ;
        }
        cout<<"Pattern found.\n";
        if(b==0){
            cout<<"Reading from file:"<< &brand_name<<endl;
        }
    }
    if (brand_name =="Nike")
        brand = Brand::nike;
    else if (brand_name =="Rebook")
        brand = Brand::rebook;
    else if (brand_name =="Adidas")
        brand = Brand::adidas;
    else if (brand_name =="Puma")
        brand = Brand::puma;
    else brand = Brand::no_brand;
    getline(ss, ortopedic, ' ');
    getline(ss, usd, ' ');
    getline(ss, size, ' ');
    getline(ss, length, ' ');
    getline(ss, purpose_name, ' ');
    a = reg_func(&purpose_name);
    b = reg(&purpose_name);
    c = reg2(&purpose_name);
    if (a == 0) {
        if(c==0){
            cout<<"Pattern not foundC.\n";
            return ;
        }
        cout<<"Pattern found.\n";
        if(b==0){
            cout<<"Reading from file:"<< &purpose_name<<endl;
        }
    }//else cout<<"Pattern foundC.\n";
    if (purpose_name == "Casual")
        purpose = Purpose::casual;
    else if (purpose_name =="Sport")
        purpose = Purpose::sport;
    else purpose = Purpose::undef;
    getline(ss, running, ' ');

    ss.clear();
    Sneakers *sneakers = new Sneakers(ortopedic=="Yes", model_name, std::stoi(usd), brand, Insole{std::stoi(size), std::stoi(length)}, purpose, running == "Yes" );
    list.addShoes(sneakers);
    // }
}

void Controller::addObjectFromLineBoots(std::string line) {
    std::stringstream ss;
    std::string ortopedic;
    std::string antisole;
    std::string model_name;
    std::string brand_name;
    std::string season_name;
    Brand brand;
    Season season;
    std::string usd;
    std::string size;
    std::string length;
    ss<<line;
    getline(ss, model_name, ' ');
    int a = reg_func(&model_name);
    int b = reg(&model_name);
    int c = reg2(&model_name);
    if (a == 0) {
        if(c==0){
            cout<<"Pattern not foundC.\n";
            return ;
        }
        cout<<"Pattern found.\n";
        if(b==0){
            cout<<"Reading from file:"<< &model_name<<endl;
        }
    }//else cout<<"Pattern foundM.\n";
    getline(ss, brand_name, ' ');
    a = reg_func(&brand_name);
    b = reg(&brand_name);
    c = reg2(&brand_name);
    if (a == 0) {
        if(c==0){
            cout<<"Pattern not foundC.\n";
            return ;
        }
        cout<<"Pattern found.\n";
        if(b==0){
            cout<<"Reading from file:"<< &brand_name<<endl;
        }
    }
    //else cout<<"Pattern foundM.\n";
    if (brand_name =="Nike")
        brand = Brand::nike;
    else if (brand_name =="Rebook")
        brand = Brand::rebook;
    else if (brand_name =="Adidas")
        brand = Brand::adidas;
    else if (brand_name =="Puma")
        brand = Brand::puma;
    else brand = Brand::no_brand;
    getline(ss, ortopedic, ' ');
    getline(ss, usd, ' ');
    getline(ss, size, ' ');
    getline(ss, length, ' ');
    getline(ss, season_name, ' ');
    a = reg_func(&season_name);
    b = reg(&season_name);
    c = reg2(&season_name);
    if (a == 0) {
        if(c==0){
            cout<<"Pattern not foundC.\n";
            return ;
        }
        cout<<"Pattern found.\n";
        if(b==0){
            cout<<"Reading from file:"<< &brand_name<<endl;
        }
    }
    //else cout<<"Pattern foundM.\n";
    if (season_name == "Winter")
        season = Season::winter;
    else if (season_name =="Autumn")
        season = Season::autumn;
    else season = Season::spring;
    getline(ss, antisole, ' ');
    ss.clear();
    Boots *boots = new Boots(ortopedic=="Yes", model_name, std::stoi(usd), brand, Insole{std::stoi(size), std::stoi(length)}, season, antisole == "Yes" );
    list.addShoes(boots);
    // }
}

bool predG(Shoes *a)
{
    if (a->GetType() == 'F') {
        auto *Le = (Boots *) a->clone();
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

vector<Boots*> Controller::More39() {
    vector<Boots*> res;
    bool flag = true;
    auto temp1 = list.getShoes();
    auto iter = temp1.begin();
    while (true) {
        iter = std::find_if(iter, temp1.end(), predG);
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
bool predM(Shoes *a){
    auto *Le = (Sneakers*) a->clone();
    if((Le->getOrtopedic() == 1 ) && ( Le->getBrand() == Brand::nike || Le->getBrand() == Brand::puma)){
        delete Le;
        return true;
    } else{
        delete Le;
        return false;
    }
}

void Controller::SaveInFile() {

    auto temp = list.getShoes();


    FILE* myfile = fopen("result.txt", "w");
    for (int i = 0; i < temp.size(); ++i) {
        temp[i]->SaveInFile(myfile);
    }
    fclose(myfile);

}
vector<Shoes*>  Controller::NikePuma() {
    vector<Shoes*> temp;
    bool flag = true;
    auto temp1 = list.getShoes();
    auto iter = temp1.begin();
    while (true) {
        iter = std::find_if(iter, temp1.end(), predM);
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

bool functorS(Shoes* A, Shoes* B){
    bool result = false;

    if (A->GetType() == 'L' && B->GetType() == 'L') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp2 = (Sneakers *) B->clone();
        if (temp1->getInsole().getSize() < temp2->getInsole().getSize()) {
            result = true;
        }
        delete temp1;
        delete temp2;
    }
    if (A->GetType() == 'F' && B->GetType() == 'F') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp4 = (Boots *) B->clone();
        if (temp3->getInsole().getSize() < temp4->getInsole().getSize()) {
            result = true;
        }
        delete temp4;
        delete temp3;
    }
    if (A->GetType() == 'F' && B->GetType() == 'L') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp1 = (Sneakers *) B->clone();
        if (temp3->getInsole().getSize() < temp1->getInsole().getSize()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }

    if (A->GetType() == 'L' && B->GetType() == 'F') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp3 = (Boots *) B->clone();
        if (temp1->getInsole().getSize() < temp3->getInsole().getSize()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }
    return result;
}

bool functorZ(Shoes* A, Shoes* B){
    bool result = false;
    if (A->GetType() == 'L' && B->GetType() == 'L') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp2 = (Sneakers *) B->clone();
        if (temp1->getInsole().getSize() > temp2->getInsole().getSize()) {
            result = true;
        }
        delete temp1;
        delete temp2;
    }
    if (A->GetType() == 'F' && B->GetType() == 'F') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp4 = (Boots *) B->clone();
        if (temp3->getInsole().getSize() > temp4->getInsole().getSize()) {
            result = true;
        }
        delete temp3;
        delete temp4;
    }
    if (A->GetType() == 'F' && B->GetType() == 'L') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp1 = (Sneakers *) B->clone();
        if (temp3->getInsole().getSize() > temp1->getInsole().getSize()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }

    if (A->GetType() == 'L' && B->GetType() == 'F') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp3 = (Boots *) B->clone();
        if (temp1->getInsole().getSize() > temp3->getInsole().getSize()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }

    return result;
}

void Controller::SortBySize(bool flag) {
    vector<Shoes*> temp;
    auto temp1 = list.getShoes();
    temp.reserve(temp1.size());

    if (flag) {
        std::sort(temp.begin(), temp.end(), functorS);
    } else{
        std::sort(temp.begin(), temp.end(), functorZ);
    }
    for (int i = 0; i < temp.size(); ++i) {
        temp[i]->Print();
    }
    temp.clear();
    temp.shrink_to_fit();
}

bool functorI(Shoes* A, Shoes* B){
    bool result = false;

    if (A->GetType() == 'L' && B->GetType() == 'L') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp2 = (Sneakers *) B->clone();
        if (temp1->getInsole().getLength() < temp2->getInsole().getLength()) {
            result = true;
        }
        delete temp1;
        delete temp2;
    }
    if (A->GetType() == 'F' && B->GetType() == 'F') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp4 = (Boots *) B->clone();
        if (temp3->getInsole().getLength() < temp4->getInsole().getLength()) {
            result = true;
        }
        delete temp4;
        delete temp3;
    }
    if (A->GetType() == 'F' && B->GetType() == 'L') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp1 = (Sneakers *) B->clone();
        if (temp3->getInsole().getLength() < temp1->getInsole().getLength()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }

    if (A->GetType() == 'L' && B->GetType() == 'F') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp3 = (Boots *) B->clone();
        if (temp1->getInsole().getLength() < temp3->getInsole().getLength()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }
    return result;
}

bool functorL(Shoes* A, Shoes* B){
    bool result = false;
    if (A->GetType() == 'L' && B->GetType() == 'L') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp2 = (Sneakers *) B->clone();
        if (temp1->getInsole().getLength() > temp2->getInsole().getLength()) {
            result = true;
        }
        delete temp1;
        delete temp2;
    }
    if (A->GetType() == 'F' && B->GetType() == 'F') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp4 = (Boots *) B->clone();
        if (temp3->getInsole().getLength() > temp4->getInsole().getLength()) {
            result = true;
        }
        delete temp3;
        delete temp4;
    }
    if (A->GetType() == 'F' && B->GetType() == 'L') {
        auto *temp3 = (Boots *) A->clone();
        auto *temp1 = (Sneakers *) B->clone();
        if (temp3->getInsole().getLength() > temp1->getInsole().getLength()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }

    if (A->GetType() == 'L' && B->GetType() == 'F') {
        auto *temp1 = (Sneakers *) A->clone();
        auto *temp3 = (Boots *) B->clone();
        if (temp1->getInsole().getLength() > temp3->getInsole().getLength()) {
            result = true;
        }
        delete temp1;
        delete temp3;
    }

    return result;
}

void Controller::SortByInsole(bool flag) {
    vector<Shoes*> temp;
    auto temp1 = list.getShoes();
    temp.reserve(temp1.size());

    if (flag) {
        std::sort(temp.begin(), temp.end(), functorI);
    } else{
        std::sort(temp.begin(), temp.end(), functorL);
    }
    for (int i = 0; i < temp.size(); ++i) {
        temp[i]->Print();
    }
    temp.clear();
    temp.shrink_to_fit();
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

void Controller::SortByPrice(bool flag) {
    vector<Shoes*> temp;
    auto temp1 = list.getShoes();
    temp.reserve(temp1.size());

    if (flag) {
        std::sort(temp.begin(), temp.end(), functorT);
    } else{
        std::sort(temp.begin(), temp.end(), functorF);
    }
    for (int i = 0; i < temp.size(); ++i) {
        temp[i]->Print();
    }
    temp.clear();
    temp.shrink_to_fit();
}


void Controller::Sort(int criterion) {
    int flag = -1;
    if(criterion == 1){
        cout << "\33[1:35mВведіть значення напрямку сортування. 1 - від меншого до більшого; 0 - від більшого до меншого\33[0m";
        cin >> flag;
        cout << endl;
        cout << "\33[1:34mОтсортированный список обуви list за ціною\33[0m\n";
        print1();
        SortByPrice(flag);
        list.ShowAll();
        cout << "|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        cout << endl;
    }else if(criterion == 2){
        cout << "\33[1:35mВведіть значення напрямку сортування. 1 - від меншого до більшого; 0 - від більшого до меншого\33[0m";
        cin >> flag;
        cout << endl;
        cout << "\33[1:34mОтсортированный список обуви list за довжиною устілки\33[0m\n";
        print1();
        SortByInsole(true);
        list.ShowAll();
        cout << "|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        cout << endl;
    }else if(criterion == 3){
        cout << "\33[1:35mВведіть значення напрямку сортування. 1 - від меншого до більшого; 0 - від більшого до меншого\33[0m";
        cin >> flag;
        cout << endl;
        cout << "\33[1:34mОтсортированный список обуви list за розміром взуття\33[0m\n";
        print1();
        SortBySize(true);
        list.ShowAll();
        cout << "|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        cout << endl;
    } else cout << "\33[1:31mТакого сортування не існує\33[0m";

}

vector<Sneakers*>  Controller::CheapRunningShoes() {
    vector<Sneakers *> res;
    bool flag = true;
    auto temp1 = list.getShoes();
    auto iter = temp1.begin();
    while (true) {
        iter = std::find_if(iter, temp1.end(), predS);
        if (*iter == NULL) {
            cout << "ERROR: Nothing found" << endl;
        }
        flag = false;
        ((Sneakers *) *iter)->Print();
        cout << endl;
        res.push_back((Sneakers *) *iter);
        iter++;
        //}
        if (flag) {
            cout << "ERROR: Nothing found" << endl;
        }
        return res;
    }
}


//vector<Sneakers*>  Controller::CheapRunningShoes(){
//    vector<Sneakers*> res;
//    bool flag = true;
//    auto temp1 = shoes.getShoes();
//    auto iter = temp1.begin();
//    while (true) {
//        iter = std::find_if(iter, temp1.end(), predS);
//    if(*iter == NULL){
//        cout << "ERROR: Nothing found" << endl;
//    }
//    flag = false;
//    ((Sneakers*)*iter)->Print();
//    cout << endl;
//    res.push_back((Sneakers*)*iter);
//    iter++;
//    //}
//    if (flag){
//        cout << "ERROR: Nothing found" << endl;
//    }
//    return res;
//}


void Controller::SearchByCriteria(int one, int two, int three){
    auto temp = list.getShoes();
//    print1();
//    list.getShoes()[1]->Print();
//    temp[1]->SearchSize();
//    cout<<endl;
//    for(auto &shoes : temp){
//        shoes->SearchSize();
//    }

    if((one == 1 && two == 2 && three == 3) ||
       (one == 1 && two == 3 && three == 2) ||
       (one == 2 && two == 1 && three == 3) ||
       (one == 2 && two == 3 && three == 1) ||
       (one == 3 && two == 2 && three == 1) ||
       (one == 3 && two == 1 && three == 2))
    {
        cout << "\33[1:36mВи обрали розмір взуття, розмір устілки і чи є взуття ортопедичним.\n\33[0m"<<endl;
        cout << "Взуття під номером                             ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "   ";
        }
        cout <<"\nУ наявності є взуття таких розмірів:          ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchSize();//SearchSize();
        }
        cout << "\nУ наявності є взуття з такою довжиною устілки:";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchLength();
        }
        cout << "\nОртопедичність:                               ";
        for(auto &shoes : temp){
            cout.width(6);
            shoes->SearchOrt();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    }
    else if((one == 1 && two == 2 && three == 4) ||
            (one == 1 && two == 4 && three == 2) ||
            (one == 2 && two == 1 && three == 4) ||
            (one == 2 && two == 4 && three == 1) ||
            (one == 4 && two == 2 && three == 1) ||
            (one == 4 && two == 1 && three == 2))
    {
        cout << "\33[1:36mВи обрали розмір взуття, розмір устілки і ціна взуття.\n\33[0m"<<endl;
        cout << "Взуття під номером                             ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "     ";
        }
        cout <<"\nУ наявності є взуття таких розмірів:          ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchSize();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття з такою довжиною устілки:";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchLength();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття з такою ціною:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchUSD();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    }
    else if((one == 1 && two == 4 && three == 3) ||
            (one == 1 && two == 3 && three == 4) ||
            (one == 4 && two == 1 && three == 3) ||
            (one == 4 && two == 3 && three == 1) ||
            (one == 3 && two == 4 && three == 1) ||
            (one == 3 && two == 1 && three == 4))
    {
        cout << "\33[1:36mВи обрали розмір взуття, ціну взуття і чи є взуття ортопедичним.\n\33[0m"<<endl;
        cout << "Взуття під номером                              ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "     ";
        }
        cout <<"\nУ наявності є взуття таких розмірів:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchSize();
            cout << "  ";
        }
        cout << "\nОртопедичність:                               ";
        for(auto &shoes : temp){
            cout.width(6);
            shoes->SearchOrt();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття з такою ціною:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchUSD();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    }
    else if((one == 1 && two == 2 && three == 5) ||
            (one == 1 && two == 5 && three == 2) ||
            (one == 2 && two == 1 && three == 5) ||
            (one == 2 && two == 5 && three == 1) ||
            (one == 5 && two == 2 && three == 1) ||
            (one == 5 && two == 1 && three == 2))
    {
        cout << "\33[1:36mВи обрали розмір взуття, довжину устілки взуття і бренд взуття.\n\33[0m"<<endl;
        cout << "Взуття під номером                              ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "     ";
        }
        cout <<"\nУ наявності є взуття таких розмірів:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchSize();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття з такою довжиною устілки: ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchLength();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття таких брендів:            ";
        for(auto &shoes : temp){
            cout.width(10);
            shoes->SearchBrand();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    }
    else if((one == 1 && two == 5 && three == 3) ||
            (one == 1 && two == 3 && three == 5) ||
            (one == 5 && two == 1 && three == 3) ||
            (one == 5 && two == 3 && three == 1) ||
            (one == 3 && two == 2 && three == 1) ||
            (one == 3 && two == 1 && three == 5))
    {
        cout << "\33[1:36mВи обрали розмір взуття, чи є взуття ортопедичним і бренд взуття.\n\33[0m"<<endl;
        cout << "Взуття під номером                              ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "     ";
        }
        cout <<"\nУ наявності є взуття таких розмірів:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchSize();
            cout << "  ";
        }
        cout << "\nОртопедичність:                               ";
        for(auto &shoes : temp){
            cout.width(6);
            shoes->SearchOrt();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття таких брендів:            ";
        for(auto &shoes : temp){
            cout.width(10);
            shoes->SearchBrand();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    }
    else if((one == 1 && two == 5 && three == 4) ||
            (one == 1 && two == 4 && three == 5) ||
            (one == 5 && two == 1 && three == 4) ||
            (one == 5 && two == 4 && three == 1) ||
            (one == 4 && two == 5 && three == 1) ||
            (one == 4 && two == 1 && three == 5))
    {
        cout << "\33[1:36mВи обрали розмір взуття, ціну взуття і бренд взуття.\n\33[0m"<<endl;
        cout << "Взуття під номером                              ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "     ";
        }
        cout <<"\nУ наявності є взуття таких розмірів:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchSize();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття з такою ціною:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchUSD();
        }
        cout << "\nУ наявності є взуття таких брендів:            ";
        for(auto &shoes : temp){
            cout.width(10);
            shoes->SearchBrand();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    }
    else if((one == 2 && two == 4 && three == 3) ||
            (one == 2 && two == 3 && three == 4) ||
            (one == 4 && two == 2 && three == 3) ||
            (one == 4 && two == 3 && three == 2) ||
            (one == 3 && two == 4 && three == 2) ||
            (one == 3 && two == 2 && three == 4))
    {
        cout << "\33[1:36mВи обрали довжину устілки взуття, ціну взуття і чи є взуття ортопедичним.\n\33[0m"<<endl;
        cout << "Взуття під номером                              ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "     ";
        }
        cout << "\nУ наявності є взуття з такою довжиною устілки:";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchLength();
            cout << "  ";
        }
        cout << "\nОртопедичність:                               ";
        for(auto &shoes : temp){
            cout.width(6);
            shoes->SearchOrt();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття з такою ціною:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchUSD();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    }
    else if((one == 4 && two == 2 && three == 5) ||
            (one == 4 && two == 5 && three == 2) ||
            (one == 2 && two == 4 && three == 5) ||
            (one == 2 && two == 5 && three == 4) ||
            (one == 5 && two == 2 && three == 4) ||
            (one == 5 && two == 4 && three == 2))
    {
        cout << "\33[1:36mВи обрали довжину устілки взуття, ціну взуття і бренд взуття.\n\33[0m"<<endl;
        cout << "Взуття під номером                              ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "     ";
        }
        cout << "\nУ наявності є взуття з такою довжиною устілки:";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchLength();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття з такою ціною:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchUSD();
        }
        cout << "\nУ наявності є взуття таких брендів:            ";
        for(auto &shoes : temp){
            cout.width(10);
            shoes->SearchBrand();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    }
    else if((one == 3 && two == 2 && three == 5) ||
            (one == 3 && two == 5 && three == 2) ||
            (one == 2 && two == 3 && three == 5) ||
            (one == 2 && two == 5 && three == 3) ||
            (one == 5 && two == 2 && three == 3) ||
            (one == 5 && two == 3 && three == 2))
    {
        cout << "\33[1:36mВи обрали довжину устілки взуття, чи є взуття ортопедичним і бренд взуття.\n\33[0m"<<endl;
        cout << "Взуття під номером                              ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "     ";
        }
        cout << "\nУ наявності є взуття з такою довжиною устілки:";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchLength();
            cout << "  ";
        }
        cout << "\nОртопедичність:                               ";
        for(auto &shoes : temp){
            cout.width(6);
            shoes->SearchOrt();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття таких брендів:            ";
        for(auto &shoes : temp){
            cout.width(10);
            shoes->SearchBrand();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    }
    else if((one == 3 && two == 4 && three == 5) ||
            (one == 3 && two == 5 && three == 4) ||
            (one == 4 && two == 3 && three == 5) ||
            (one == 4 && two == 5 && three == 3) ||
            (one == 5 && two == 4 && three == 3) ||
            (one == 5 && two == 3 && three == 4))
    {
        cout << "\33[1:36mВи обрали чи є взуття ортопедичним, ціну взуття і бренд взуття.\n\33[0m"<<endl;
        cout << "Взуття під номером                              ";
        for(int i =0; i < temp.size(); i++){
            cout.width(5);
            cout << i<< "     ";
        }
        cout << "\nОртопедичність:                               ";
        for(auto &shoes : temp){
            cout.width(6);
            shoes->SearchOrt();
            cout << "  ";
        }
        cout << "\nУ наявності є взуття з такою ціною:           ";
        for(auto &shoes : temp){
            cout.width(5);
            shoes->SearchUSD();
        }
        cout << "\nУ наявності є взуття таких брендів:            ";
        for(auto &shoes : temp){
            cout.width(10);
            shoes->SearchBrand();
        }
        cout << "\n\n\33[1:36mВиберіть пару взуття яка вам найбільш сподобалась.\33[0m";
        cout << "\nВведіть номер пари.\n";
        int number = -1;
        cin>> number;
        if( number < temp.size() && number >=0){
            print1();
            list.getShoes()[number]->Print();
            cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
        }
        else cout << "\33[1:31mТакої пари не існує\33[0m";
    } else if((one != 1 && two != 1 && three != 1) ||
              (one != 2 && two != 2 && three != 2) ||
              (one != 3 && two != 3 && three != 3) ||
              (one != 4 && two != 4 && three != 4) ||
              (one != 5 && two != 5 && three != 5))
    {
        cout << "\33[1:31mТакого критерія не існує\33[0m";
    }
    return;
}
