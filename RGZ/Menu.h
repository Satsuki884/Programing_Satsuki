
#ifndef RGZ_MENU_H
#define RGZ_MENU_H

/**
 * @file menu.cpp
 * @brief File that performs methods of menu class
 *
 * @author Klymenko S.
 * @date 29-may-2021
 * @version 1.0
 */

#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::out_of_range;
using std::string;
using std::ifstream;
using std::ofstream;

//int Menu();
//int Run();
#include "Controller.h"
/**
 * Клас-меню
 */
class Menu {
private:
    Controller controller;
public:
    /**
    * Default constructor
    */
    Menu() = default;

    /**
    * Default destructor
    */
    ~Menu() = default;

    /**
     * Method that shows user menu
     *
     * The method displays options for working with the collection
     */
    void User_menu();
};


#endif //RGZ_MENU_H
