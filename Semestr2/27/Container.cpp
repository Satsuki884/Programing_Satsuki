#include "Container.h"

List::List() {}

List::List(const List &copy) :index(copy.index) {
    for (int i = 0; i <= copy.index; i++) {
        shoes[i] = copy.shoes[i]->clone();
    }
}

List::~List(){
    while (index >= 0){
        delete shoes[index];
        index--;
    }
}
List& List::operator=(const List &copy) {
    if (this == &copy) // a = a;
        return *this;
    while (index >= 0){
        delete shoes[index];
        index--;
    }
    for (int i = 0; i <= copy.index; i++) {
        shoes[i] = copy.shoes[i]->clone();
    }
    index = copy.index;
    return *this;
}



void List::addShoes(Shoes *baka) {
    index += 1;
    if (index >= 255) {
        return;
    }
    shoes[index] = baka->clone();
    //cout << index;
}


Shoes* List::getShoes(int index) const{
    if(index < 0){
        index= 0;
    }
    if(index >= this->index) {
        index = this->index - 1;
    }

    return shoes[index]->clone();
}

void List::ShowAll() const {
    for (int i = 0; i <= this->index; ++i) {
        if(i == 0){ cout << "\33[1:34mКросовки\33[0m\n";}
        if(i == ((this->index+1)/2)){ cout << "\33[1:34mБотинки\33[0m\n";}
        cout << "\33[1:33mShoes #" << i+1 << ":\33[0m";
        shoes[i]->Print();
        cout << endl;
    }
}




void List::Method1(){
    int array_of_usd[ARRAY_SIZE/2];
    for(int i =0; i < ARRAY_SIZE/2; i++) {
        array_of_usd[i] = shoes[i]->CheapRunningShoes();
    }
    int min =array_of_usd[0];
    int a = -1;
    for(int i =1; i < ARRAY_SIZE/2; i++) {
        if(min > array_of_usd[i] && min != 0 && array_of_usd[i] != 0) {
            min = array_of_usd[i];
            a = i;
        }
    }
    cout << "\33[1:34mСамые дешёвые беговые кроссовки\33[0m";
    shoes[a]->Print();
}


void List::Method2(){
    cout << "\33[1:34mБотинки размером больше 39\33[0m";
    for(int i =ARRAY_SIZE/2; i < ARRAY_SIZE; i++) {
        shoes[i]->More39();
    }

}

void List::Method3(){
    cout << "\33[1:34mОртопедическая обувь брендов Найк и Пума\33[0m";
    for(int i =0; i < ARRAY_SIZE; i++) {
        shoes[i]->NikePuma();
    }
}