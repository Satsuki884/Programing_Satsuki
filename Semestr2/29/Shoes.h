//
// Created by maestro on 28.05.2021.
//

#ifndef INC_29_SHOES_H
#define INC_29_SHOES_H



#include <string>
#include <sstream>
#include <cstring>
#include <iostream>
#include <fstream>
#include <regex>
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

#define ARRAY_SIZE 6

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
    bool m_is_ortopedic;
    std::string m_model_name;
    int m_price_usd;
    Brand m_brand;
    Insole m_insole_size;
public:
    virtual void Print() = 0;
    virtual ~Shoes() {}
    Shoes();
    Shoes(bool m_is_ortopedic,  string m_model_name, int m_price_usd, const Brand m_brand, Insole& m_insole_size);
    Shoes(const Shoes &copy);
    virtual Shoes* clone() = 0;
    bool getOrtopedic() const;
    string getModelName() const;
    int getPrice() const;
    Brand getBrand() const;
    Insole getInsole() const;
    void setOrtopedic(const bool ortopedic);
    void setModel(const string model_name);
    void setPrice(const int price_usd);
    void setBrand(const Brand brand);
    void setInsole( Insole insole);


    friend bool operator==(const Shoes& A, const Shoes& B);

    friend bool operator!=(const Shoes& A, const Shoes& B);

    friend ostream & operator<<(ostream &out ,const Shoes& shoes);

};


//|--------------------Наследник 1--------------------|\\

enum Type { undef,
    sport,
    casual,};

class Sneakers : public Shoes {
    Type enumPurpose;
    bool m_is_running;
public:
    Sneakers();
    Sneakers(bool m_is_ortopedic,  string m_model_name, int m_price_usd, const Brand m_brand, Insole m_insole_size, Type enumPurpose, bool m_is_running);
    Sneakers(Sneakers& copy);
    virtual ~Sneakers();

//    friend ostream & operator<<(ostream &out ,const Sneakers& shoes);

    void Print() override;
    Type getPurpose() const;
    bool getRunning() const;
    void setRunning(const bool running);
    void setPurpose(const Type Purpose);
    Shoes* clone();

};


#endif //INC_29_SHOES_H
