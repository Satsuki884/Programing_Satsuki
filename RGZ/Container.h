
#ifndef INC_30_CONTAINER_H
#define INC_30_CONTAINER_H
/**
 * @file list.cpp
 * @brief File that performs methods of list class
 *
 * @author Klyemnko S.
 * @date 29-may-2021
 * @version 1.0
 */

#include "Shoes.h"

/**
 * List class
 */
class List{
    vector<Shoes*> shoes;
    int index = -1;
public:
    /**
    * Default constructor
    */
    List();

    /**
    * Copy constructor
    */
    List(const List &copy);

    /**
    * Default destructor
    */
    virtual ~List();

    /**
     * Adding element method
     *
     * Method that adds new element in the end of the vector
     * @param shoes - object, that will be added
     */
    void addShoes(Shoes *shoes);
    /**
     * Getter
     *
     * Returns vector of objects
     */
    vector<Shoes*> getShoes ();
    /**
     * Setter
     *
     * Sets new vector
     */
    void setShoes(vector<Shoes*> &shoes1);
    /**
    * Showing method
    *
    * Method that displays collection for user
    */
    void ShowAll();
    /**
    * Deleting by index element
    *
    * Method, that deletes element in vector by index
    * @param index - element on this position will be deleted
    */
    void DeleteElement(int index);
    /**
    * Method, that clears the vector
    *
    * Method deletes all elements from the vector
    */
    void DeleteAll();


};

    /**
    * Method that gives us a list template
    */
void print1();
    /**
    * Method that gives us a list template
    */
void print2();

#endif //INC_30_CONTAINER_H
