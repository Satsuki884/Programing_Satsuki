//
// Created by maestro on 02.06.2021.
//

#ifndef INC_30_SHOES_H
#define INC_30_SHOES_H

#include <string>
#include <sstream>
#include <cstring>
#include <iostream>
#include <fstream>
#include <regex>
#include <vector>
#include <set>
#include <list>
#include <algorithm>

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


enum class Brand
{
    no_brand,
    adidas,
    puma,
    rebook,
    nike,
};

class Insole{
    int size;
    int length;
public:
    Insole();
    Insole(int size, int lenght);
    Insole(const Insole &copy);
    virtual ~Insole();
    int getSize() const;
    int getLength() const;
    void setSize(const int &size);
    void setLength(const int &length);
    void Print();
};

class Shoes{
public:
    virtual void Print() = 0;
    virtual Shoes* clone() = 0;
//    virtual int CheapRunningShoes() = 0;
//    virtual void More39() = 0;
//    virtual void NikePuma() = 0;
    virtual ~Shoes() {}
    virtual char GetType() =0;
};


//|--------------------Наследник 1--------------------|\\

enum Purpose { undef,
    sport,
    casual,};

class Sneakers : public Shoes {
    bool m_is_ortopedic;
    std::string m_model_name;
    int m_price_usd;
    Brand m_brand;
    Insole m_insole_size;
    Purpose enumPurpose;
    bool m_is_running;
public:
    Sneakers();
    Sneakers(bool m_is_ortopedic,  string m_model_name, int m_price_usd, const Brand m_brand, Insole m_insole_size, Purpose enumPurpose, bool m_is_running);


    bool getOrtopedic() const;
    string getModelName() const;
    int getPrice() const;
    Brand getBrand() const;
    Purpose getPurpose() const;
    Insole getInsole() const;
    bool getRunning() const;
    void setOrtopedic(const bool ortopedic);
    void setModel(const string model_name);
    void setPrice(const int price_usd);
    void setBrand(const Brand brand);
    void setPurpose(const Purpose Purpose);
    void setRunning(const bool running);
    virtual ~Sneakers();
    void Print() override;
    Shoes *clone() override;
    char GetType() override;
//    int CheapRunningShoes() override;
//    void More39() override {};
//    void NikePuma() override;

};

bool operator==(const Sneakers& A, const Sneakers& B);

//|--------------------Наследник 2--------------------|\\

enum Season{
    winter,
    autumn,
    spring
};

class Boots : public Shoes {
    bool m_is_ortopedic;
    std::string m_model_name;
    int m_price_usd;
    Brand m_brand;
    Insole m_insole_size;
    Season m_season;
    bool m_anti_slip_sole;
public:
    Boots();
    Boots(bool m_is_ortopedic,  string m_model_name, int m_price_usd, const Brand m_brand, Insole m_insole_size, Season m_season, bool m_anti_slip_sole);

    virtual ~Boots();

    bool getOrtopedic() const;
    string getModelName() const;
    int getPrice() const;
    Brand getBrand() const;
    Season getSeason() const;
    Insole getInsole() const;
    bool getAntiSlip() const;
    void setOrtopedic(const bool ortopedic);
    void setModel(const string model_name);
    void setPrice(const int price_usd);
    void setBrand(const Brand brand);
    void setInsole(const Insole m_insole_size);
    void setAntiSlip(const bool anti_slip_sole);
    void Print() override;
    Shoes *clone() override;
    char GetType() override;
//    int CheapRunningShoes() override { };
//    void More39() override;
//    void NikePuma() override;


};


bool operator==(const Boots& A, const Boots& B);




#endif //INC_30_SHOES_H
