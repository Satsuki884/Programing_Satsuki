//
// Created by maestro on 27.05.2021.
//

#ifndef INC_27_CONTAINER_H
#define INC_27_CONTAINER_H


#include "Shoes.h"

class List{
    Shoes *shoes[ARRAY_SIZE];
    int index = -1;
public:
    List();
    List(const List &copy);

    virtual ~List();

    void addShoes( Shoes* shoes);

    Shoes* getShoes (int index) const;

    void ShowAll() const;

    void Method1();

    void Method2();

    void Method3();

    List& operator=(const List &copy);

};


#endif //INC_27_CONTAINER_H
