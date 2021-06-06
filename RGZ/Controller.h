
#ifndef RGZ_CONTROLLER_H
#define RGZ_CONTROLLER_H
/**
 * @file controller.cpp
 * @brief File that performs methods of controller class
 *
 * @author Klymenko S.
 * @date 29-may-2021
 * @version 1.0
 */

#include "Container.h"
/**
 * Controller class
 */
class Controller{
    List shoes;
    int index = -1;
public:
    /**
    * Default constructor
    */
    Controller() = default;

    /**
    * Default destructor
    */
    ~Controller() = default;
    /**
     * Sort method
     *
     * Method given boots, size more 39
     */
    vector<Boots*> More39();
    /**
     * Sort method
     *
     * Method that given cheap running sneakers
     */
    vector<Sneakers*> CheapRunningShoes();
    /**
     * Sort method
     *
     * Method that given shoes of brand: nike or puma
     */
    vector<Shoes*> NikePuma();
    /**
     * Sort method
     *
     * Method that sorts by given number
     * @param number - the number, that method will sort by
     */
    void Sort(int number);
    /**
     * Getter
     *
     * Gets list
     */
    List* getlist();
    /**
     * Sort method

     * @param flag - responsible for sorting direction
     */
    void SortByPrice(bool flag);
    /**
     * Sort method
     *
     * @param flag - responsible for sorting direction
     */
    void SortBySize(bool flag);
    /**
     * Sort method
     *
     * @param flag - responsible for sorting direction
     */
    void SortByInsole(bool flag);
    /**
     * SaveInFile method
     *
     * Method that save array in file
     */
    void SaveInFile();
    /**
     * Method that reads data from file
     *
     * Method of opening a file for reading
     */
    void ReadFromFileSneakers();
    /**
     * Method that reads data from file
     *
     * Method of opening a file for reading
     */
    void ReadFromFileBoots();
    /**
     * Method that reads data from file
     *
     * Method thar reads data from file and puts it down in list
     */
    void addObjectFromLineSneakers(std::string line);
    /**
     * Method that reads data from file
     *
     * Method thar reads data from file and puts it down in list
     */
    void addObjectFromLineBoots(std::string line);
    /**
     * A method for checking for a regular expression
     *
     * The method returns yes or no depending on the result of the check
     */
    int reg_func(std::string * str);
    /**
     * A method for checking for a regular expression
     *
     * The method returns yes or no depending on the result of the check
     */
    int reg(std::string * str);
    /**
     * A method for checking for a regular expression
     *
     * The method returns yes or no depending on the result of the check
     */
    int reg2(std::string * str);


};


#endif //RGZ_CONTROLLER_H
