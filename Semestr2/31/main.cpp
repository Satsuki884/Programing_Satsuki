//
// Created by maestro on 03.06.2021.
//

#include "Container.hpp"


int main() {

    Sneakers sneakers(true, "Ingnite1", 2990, Brand::puma, Insole{37, 24},
                      Purpose::sport, true);
    Sneakers sneakers2(false, "Response", 2590, Brand::adidas, Insole{ 46, 22 },
                       Purpose::casual, true);
    Sneakers sneakers3(true, "Wearajjday", 2730, Brand::rebook, Insole{ 40, 26 },
                       Purpose::sport, false);


    Boots boots (false, "Ingnite2", 2300, Brand::puma, Insole{37, 24},
                 Season::autumn, true);
    Boots boots2 (false, "Response", 2390, Brand::adidas, Insole{46, 22},
                  Season::spring, true);
    Boots boots3(true, "Wearajjday", 3730, Brand::nike, Insole{40, 26},
                 Season::winter, false);

    //List<Shoes> *list;
    List<Shoes> list;

    list.addShoes(&sneakers);
    list.addShoes(&sneakers2);
    list.addShoes(&sneakers3);
    list.addShoes(&boots);
    list.addShoes(&boots2);
    list.addShoes(&boots3);


    cout << "\33[1:34mИсходный список обуви list\33[0m";
    cout << endl;
    //list->ShowAll();
    int i = 0;
    for(auto &shoes : list){
        cout << "\33[1:33mShoes #" << i+1 << ":\33[0m";
        shoes->Print();
        cout << endl;
        i++;
    }
    cout << endl;


    //Метод 1
    cout << "\33[1:34mБотинки размером больше 39\33[0m";
    cout << endl;
    list.More39();
    cout << endl;

    //Метод 2
    cout << "\33[1:34mОртопедическая обувь брендов Найк и Пума\33[0m";
    cout << endl;
    list.NikePuma();
    cout << endl;

    cout << "\33[1:34mОтсортированный список обуви list\33[0m\n"<<endl;
    cout << endl;
    list.SortByPrice(true);
    //list->ShowAll();
    int c =0;
    for(auto &shoes : list){
        cout << "\33[1:33mShoes #" << c+1 << ":\33[0m";
        shoes->Print();
        cout << endl;
        c++;
    }
    cout << endl;

    //Метод 3
    cout << "\33[1:34mСамые дешёвые беговые кроссовки\33[0m";
    cout << endl;
    list.CheapRunningShoes();
    cout << endl;



    return 0;
}