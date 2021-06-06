
#ifndef INC_30_SHOES_H
#define INC_30_SHOES_H

/**
 * @file book.cpp
 * @brief File that performs methods of the basic class
 *
 * @author Klymenko S.
 * @date 29-may-2021
 * @version 1.0
 */

#include <string>
#include <cstdio>
#include <sstream>
#include <cstring>
#include <iostream>
#include <fstream>
#include <regex>
#include <vector>
#include <set>
#include <list>
#include <algorithm>
#include <syslog.h>
#include <regex.h>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::stringstream;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::istream;
using std::regex_match;
using std::regex;
using std::stoi;
using std::vector;
using std::map;
using std::set;

/**
 * Enumeration of brand
 */
enum class Brand
{
    no_brand,
    adidas,
    puma,
    rebook,
    nike,
};

/**
 * "Insole" class
 */

class Insole{
    int size;
    int length;
public:
    /**
    * Default constructor
    */
    Insole();
    /**
    * Constructor with parameters
    */
    Insole(int size, int lenght);
    /**
    * Copy constructor
    */
    Insole(const Insole &copy);
    /**
    * Default destructor
    */
    virtual ~Insole();
    /**
     * Getter
     *
     * Returns version of the Insole
     */
    int getSize() const;
    /**
     * Getter
     *
     * Returns version of the Insole
     */
    int getLength() const;
    /**
     * Setter
     *
     * Returns version of the Insole
     */
    void setSize(const int &size);
    /**
     * Setter
     *
     * Returns version of the Insole
     */
    void setLength(const int &length);
    /**
     * Print method
     *
     * Displays object for the user
     */
    void Print();
};
/**
 * Basic class interface "Shoes"
 */
class Shoes{
public:
    /**
    * Virtual print method
    */
    virtual void Print() = 0;
    /**
    * Virtual clone method
    */
    virtual Shoes* clone() = 0;
    /**
    * Virtual destructor
    */
    virtual ~Shoes() {}
    /**
    * Virtual getter, that allows to get info about type of the object
    */
    virtual char GetType() =0;
    /**
    * Virtual method, that save array in file
    */
    virtual void SaveInFile(FILE * file_out) = 0;
};

//First inheritor

/**
 * Enumeration of Purpose
 */
enum Purpose { undef,
    sport,
    casual,};
/**
 * Class inheritor "Sneakers" of basic interface class
 */
class Sneakers : public Shoes {
    bool m_is_ortopedic;
    std::string m_model_name;
    int m_price_usd;
    Brand m_brand;
    Insole m_insole_size;
    Purpose enumPurpose;
    bool m_is_running;
public:
    /**
    * Default constructor
    */
    Sneakers();
    /**
    * Constructor with parameters
    */
    Sneakers(bool m_is_ortopedic,  string m_model_name, int m_price_usd, const Brand m_brand, Insole m_insole_size, Purpose enumPurpose, bool m_is_running);

    /**
     * Getter
     *
     * Returns version of the Sneakers
     */
    bool getOrtopedic() const;
    /**
     * Getter
     *
     * Returns version of the Sneakers
     */
    string getModelName() const;
    /**
     * Getter
     *
     * Returns version of the Sneakers
     */
    int getPrice() const;
    /**
     * Getter
     *
     * Returns version of the Sneakers
     */
    Brand getBrand() const;
    /**
     * Getter
     *
     * Returns version of the Sneakers
     */
    Purpose getPurpose() const;
    /**
     * Getter
     *
     * Returns version of the Sneakers
     */
    Insole getInsole() const;
    /**
     * Getter
     *
     * Returns version of the Sneakers
     */
    bool getRunning() const;
    /**
     * Setter
     *
     * Returns version of the Sneakers
     */
    void setOrtopedic(const bool ortopedic);
    /**
     * Setter
     *
     * Returns version of the Sneakers
     */
    void setModel(const string model_name);
    /**
     * Setter
     *
     * Returns version of the Sneakers
     */
    void setPrice(const int price_usd);
    /**
     * Setter
     *
     * Returns version of the Sneakers
     */
    void setBrand(const Brand brand);
    /**
     * Setter
     *
     * Returns version of the Sneakers
     */
    void setPurpose(const Purpose Purpose);
    /**
     * Setter
     *
     * Returns version of the Sneakers
     */
    void setRunning(const bool running);
    /**
    * Default destructor
    */
    virtual ~Sneakers();
    /**
     * Print method
     *
     * Sneakers object for the user
     */
    void Print() override;
    /**
     * Clone method
     *
     * Returns the pointer of the object
     */
    Shoes *clone() override;
    /**
     * Type detection method
     *
     * Returns the type of the object
     */
    char GetType() override;
    /**
    * Save in file method
    */
    void SaveInFile(FILE * file_out) override;

};
/**
* Overload comparison operator == for Fiction Book object
*/
bool operator==(const Sneakers& A, const Sneakers& B);


//Second inheritor

/**
 * Enumeration of Season
 */
enum Season{
    winter,
    autumn,
    spring
};
/**
 * Class inheritor "Boots" of basic interface class
 */
class Boots : public Shoes {
    bool m_is_ortopedic;
    std::string m_model_name;
    int m_price_usd;
    Brand m_brand;
    Insole m_insole_size;
    Season m_season;
    bool m_anti_slip_sole;
public:
    /**
    * Default constructor
    */
    Boots();
    /**
    * Constructor with parameters
    */
    Boots(bool m_is_ortopedic,  string m_model_name, int m_price_usd, const Brand m_brand, Insole m_insole_size, Season m_season, bool m_anti_slip_sole);
    /**
    * Default destructor
    */
    virtual ~Boots();
    /**
     * Getter
     *
     * Returns version of the Boots
     */
    bool getOrtopedic() const;
    /**
     * Getter
     *
     * Returns version of the Boots
     */
    string getModelName() const;
    /**
     * Getter
     *
     * Returns version of the Boots
     */
    int getPrice() const;
    /**
     * Getter
     *
     * Returns version of the Boots
     */
    Brand getBrand() const;
    /**
     * Getter
     *
     * Returns version of the Boots
     */
    Season getSeason() const;
    /**
     * Getter
     *
     * Returns version of the Boots
     */
    Insole getInsole() const;
    /**
     * Getter
     *
     * Returns version of the Boots
     */
    bool getAntiSlip() const;
    /**
     * Setter
     *
     * Returns version of the Boots
     */
    void setOrtopedic(const bool ortopedic);
    /**
     * Setter
     *
     * Returns version of the Boots
     */
    void setModel(const string model_name);
    /**
     * Setter
     *
     * Returns version of the Boots
     */
    void setPrice(const int price_usd);
    /**
     * Setter
     *
     * Returns version of the Boots
     */
    void setBrand(const Brand brand);
    /**
     * Setter
     *
     * Returns version of the Boots
     */
    void setInsole(const Insole m_insole_size);
    /**
     * Setter
     *
     * Returns version of the Boots
     */
    void setAntiSlip(const bool anti_slip_sole);
    /**
     * Print method
     *
     * Sneakers object for the user
     */
    void Print() override;
    /**
     * Clone method
     *
     * Returns the pointer of the object
     */
    Shoes *clone() override;
    /**
     * Type detection method
     *
     * Returns the type of the object
     */
    char GetType() override;

    /**
    * Save in file method
    */
    void SaveInFile(FILE * file_out) override;

};

/**
* Overload comparison operator == for Boots object
*/
bool operator==(const Boots& A, const Boots& B);
/**
* Overload of the output operator << for the Sneakers object
*/
ostream & operator<<(ostream &out, const Sneakers& book);
/**
* Overload of the input operator >> for the Sneakers object
*/
istream & operator>>(istream &in, Sneakers& book);
/**
* Overload of the output operator << for the Boots object
*/
ostream & operator<<(ostream &out, const Boots& book);
/**
* Overload of the input operator >> for the Boots object
*/
istream & operator>>(istream &in, Boots& book);



#endif //INC_30_SHOES_H
