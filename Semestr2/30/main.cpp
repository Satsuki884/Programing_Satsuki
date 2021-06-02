//
// Created by maestro on 02.06.2021.
//

#include "Container.h"
//#include "Backpack.h"


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

    List *list = new List;
    list->addShoes(&sneakers);
    list->addShoes(&sneakers2);
    list->addShoes(&sneakers3);
    list->addShoes(&boots);
    list->addShoes(&boots2);
    list->addShoes(&boots3);


    Sneakers sneakers4(true, "Ruru", 5990, Brand::nike, Insole{39, 26},
                      Purpose::casual, true);
    Sneakers sneakers5(false, "Pinokio", 2380, Brand::adidas, Insole{ 46, 22 },
                       Purpose::casual, true);
    Boots boots4 (true, "Ruru", 2300, Brand::no_brand, Insole{37, 24},
                 Season::autumn, true);
    Boots boots5 (false, "Pinokio", 2725, Brand::adidas, Insole{46, 22},
                  Season::spring, true);

    List *NewList = new List;
    NewList->addShoes(&sneakers4);
    NewList->addShoes(&sneakers5);
    NewList->addShoes(&boots4);
    NewList->addShoes(&boots5);


    cout << "\33[1:34mИсходный список обуви list\33[0m\n"<<endl;

    list->ShowAll();
    cout << endl;


    //Метод 1
    cout << "\33[1:34mБотинки размером больше 39\33[0m";
    cout << endl;
    list->More39();
    cout << endl;

    //Метод 2
    cout << "\33[1:34mСамые дешёвые беговые кроссовки\33[0m";
    cout << endl;
    list->CheapRunningShoes();
    cout << endl;

    //Метод 3
    cout << "\33[1:34mОртопедическая обувь брендов Найк и Пума\33[0m";
    cout << endl;
    list->NikePuma();
    cout << endl;

    cout << "\33[1:34mОтсортированный список обуви list\33[0m\n"<<endl;
    cout << endl;
    list->SortByPrice(true);
    list->ShowAll();
    cout << endl;

    cout << "\33[1:34mВставлка в список обуви list списка обуви New list\33[0m\n"<<endl;
    cout << endl;
    NewList->ShowAll();
    cout << endl;

    cout << "\33[1:34mНовый список обуви list\33[0m\n"<<endl;
    cout << endl;
    list->InsertList(*NewList);
    list->ShowAll();
    cout << endl;

    cout << "\33[1:34mОтсортированный список обуви list\33[0m\n"<<endl;
    cout << endl;
    list->SortByPrice(true);
    list->ShowAll();
    cout << endl;

    cout << "\33[1:34mДополнительное задание\33[0m\n"<<endl;
    Mapp();
    cout << endl;


//    list->DeleteElement(2);
//    list->ShowAll();

//    delete del;
    delete list;
    delete NewList;
    return 0;
}