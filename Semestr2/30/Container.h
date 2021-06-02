//
// Created by maestro on 02.06.2021.
//

#ifndef INC_30_CONTAINER_H
#define INC_30_CONTAINER_H


#include "Shoes.h"

class List{
    vector<Shoes*> shoes;
    int index = -1;
public:
    List();
    List(List &copy);

    virtual ~List();

    void addShoes( Shoes * shoes);

    vector<Shoes*> getShoes ();

    void ShowAll();

    vector<Boots*> More39();
//
    vector<Sneakers*> CheapRunningShoes();
//
    vector<Shoes*> NikePuma();

    void SortByPrice(bool flag);

    void InsertList(List &in);

    void DeleteElement(int index);

    void DeleteAll();


};

void Mapp();

#endif //INC_30_CONTAINER_H
