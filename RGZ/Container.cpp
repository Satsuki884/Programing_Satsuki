/**
 * @file list.cpp
 * @brief File that performs methods of list class
 *
 * @author Klyemnko S.
 * @date 29-may-2021
 * @version 1.0
 */
#include "Container.h"


List::List() {}

List::List(const List &copy) :index(copy.index), shoes(copy.shoes) {}

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

vector<Shoes*> List::getShoes(){
    return this->shoes;
}

void List::addShoes(Shoes *shoes) {
    index += 1;
    if (index >= 255) {
        return;
    }
    this->shoes.push_back(shoes->clone());
}

void List::setShoes(vector<Shoes *> &shoes1) {
    this->shoes = shoes1;
    index = shoes1.size();
}


void List::ShowAll(){
    for (int i = 0; i <= this->index; ++i) {
        //cout << "\33[:33mShoes #" << i+1 << ":\33[0m";
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


void print2(){
    cout.width(14);
    cout <<  "Size"<<" |";
    cout.width(14);
    cout <<  "Length"<<" |";
}

void print1(){
    cout << "\n|------------------------------------------------------------------List---------------------------------------------------------------------|"<<endl;
    cout  << "| Ortopedic |";
    cout.width(15);
    cout <<"Model name |";
    cout.width(18);
    cout <<"Brand |";
    print2();
    cout.width(16);
    cout << "Price |";
    cout.width(28);
    cout << "Anti-slip sole / Running |";
    cout.width(19);
    cout << "Purpose / Season |";
    cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
}