//
// Created by maestro on 03.06.2021.
//

#ifndef INC_32_CONTAINER_H
#define INC_32_CONTAINER_H

#include "Shoes.h"



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


    void addItem( T* item){
        this->shoes.push_back(item);
    }

    vector<T*> getShoes (){
        return this->shoes;
    }

    void ShowAll(){
        for(T &o : shoes){
            cout << o.get() << endl;
        }
    }


};

#endif //INC_32_CONTAINER_H
