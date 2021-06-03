//
// Created by maestro on 03.06.2021.
//

#include "Shoes.h"


Insole::Insole() : size(), length() {
//cout << "\ndefault constructor <Insole> " << endl;
}

Insole::Insole(int size, int length): size(size), length(length){
    //cout << "\nConstructor with arguments <Insole> " << endl;
}

Insole::Insole(const Insole &copy) : size(copy.size), length(copy.length) {
    //cout << "\nCopy constructor <Insole> " << endl;
}

Insole::~Insole() = default; // {
//    cout << "\nDestructor <Insole>" << endl;
//}

int Insole::getLength() const {
    return this->length;
}

int  Insole::getSize() const {
    return this->size;
}

void Insole::setLength(const int &length){
    this->length = length;
}

void Insole::setSize(const int &size) {
    this->size = size;
}

void Insole::Print(){
    cout << "\n\tSize: "<<  size;
    cout.width(18);
    cout << "\n\tLength: "<<  length;
}

//|--------------------Наследник 1--------------------|\\

Sneakers::Sneakers() {}

Sneakers::Sneakers(bool m_is_ortopedic,  string m_model_name, int m_price_usd, const Brand m_brand, Insole m_insole_size, Purpose enumPurpose, bool m_is_running) :
        m_is_ortopedic(m_is_ortopedic), m_model_name(m_model_name), m_price_usd(m_price_usd), m_brand(m_brand), m_insole_size(m_insole_size), enumPurpose(enumPurpose), m_is_running(m_is_running) {}


Sneakers:: ~Sneakers() {}

bool Sneakers::getOrtopedic() const{
    return this->m_is_ortopedic;
}
string Sneakers::getModelName() const{
    return this->m_model_name;
}
int Sneakers::getPrice() const{
    return  this->m_price_usd;
}
Brand Sneakers::getBrand() const{
    return this->m_brand;
}
Purpose Sneakers::getPurpose() const{
    return  this->enumPurpose;
}
Insole Sneakers::getInsole() const{
    return this->m_insole_size;
}
bool Sneakers::getRunning() const{
    return this->m_is_running;
}

void Sneakers::setOrtopedic(const bool ortopedic){
    this->m_is_ortopedic = ortopedic;
}
void Sneakers::setModel(const string model_name){
    this->m_model_name = model_name;
}
void Sneakers::setPrice(const int price_usd){
    this->m_price_usd = price_usd;
}
void Sneakers::setBrand(const Brand brand){
    this->m_brand = brand;
}
void Sneakers::setPurpose(const Purpose Purpose){
    this->enumPurpose = Purpose;
}
void Sneakers::setRunning(const bool running){
    this->m_is_running = running;
}

void Sneakers:: Print(){
    std::string a ;
    std::string b ;
    if (m_brand == Brand::nike)
        a = "Nike";
    else if (m_brand == Brand::rebook)
        a = "Rebook";
    else if (m_brand == Brand::adidas)
        a = "Adidas";
    else if (m_brand == Brand::puma)
        a = "Puma";
    else a = "No brand";

    if (enumPurpose == Purpose::casual)
        b = "Casual";
    else if (enumPurpose == Purpose::sport)
        b = "Sport";
    else b = "Undef";

    cout  << "\n\tOrtopedic: "<<m_is_ortopedic;
    cout <<"\n\tModel name: "<< m_model_name;
    cout << "\n\tBrand: "<<a;
    m_insole_size.Print();
    cout <<"\n\tUsd: "<< m_price_usd;
    cout <<"\n\tRunning: "<< m_is_running;
    cout <<"\n\tPurpose: "<< b;
    cout << "\n---------------------"<<endl;
}
//int Sneakers::CheapRunningShoes(){
//    if(m_is_running) {
//        return m_price_usd;
//    }
//    return 0;
//}


Shoes* Sneakers::clone() {
    return (Shoes*)new Sneakers(*this);
}

char Sneakers::GetType() {
    return 'L';
}

//void Sneakers::NikePuma(){
//    if(m_is_ortopedic == 1 && ( m_brand == Brand::nike || m_brand ==Brand::puma)){
//        Print();
//    }
//}




//|------------------------Наследний 2---------------------|\\

Boots::Boots() {}

Boots::Boots(bool m_is_ortopedic,  string m_model_name, int m_price_usd, const Brand m_brand, Insole m_insole_size, Season m_season, bool m_anti_slip_sole) :
        m_is_ortopedic(m_is_ortopedic), m_model_name(m_model_name), m_price_usd(m_price_usd), m_brand(m_brand), m_insole_size(m_insole_size), m_season(m_season), m_anti_slip_sole(m_anti_slip_sole) {}


Boots:: ~Boots() {}

bool Boots::getOrtopedic() const{
    return m_is_ortopedic;
}
string Boots::getModelName() const{
    return m_model_name;
}
int Boots::getPrice() const{
    return  m_price_usd;
}
Brand Boots::getBrand() const{
    return m_brand;
}
Season Boots::getSeason() const {
    return  m_season;
}
Insole Boots::getInsole() const{
    return m_insole_size;
}
bool Boots::getAntiSlip() const {
    return m_anti_slip_sole;
}

void Boots::setOrtopedic(const bool ortopedic){
    this->m_is_ortopedic = ortopedic;
}
void Boots::setModel(const string model_name){
    this->m_model_name = model_name;
}
void Boots::setPrice(const int price_usd){
    this->m_price_usd = price_usd;
}
void Boots::setBrand(const Brand brand){
    this->m_brand = brand;
}
void Boots::setAntiSlip(const bool anti_slip_sole) {
    this->m_anti_slip_sole = anti_slip_sole;
}

void Boots:: Print(){
    std::string a ;
    std::string b ;
    if (m_brand == Brand::nike)
        a = "Nike";
    else if (m_brand == Brand::rebook)
        a = "Rebook";
    else if (m_brand == Brand::adidas)
        a = "Adidas";
    else if (m_brand == Brand::puma)
        a = "Puma";
    else a = "No brand";

    if (m_season == Season::spring)
        b = "Spring";
    else if (m_season == Season::autumn)
        b = "Autumn";
    else if (m_season == Season::winter)
        b = "Winter";
    else b = "No season";

    cout  << "\n\tOrtopedic: "<<m_is_ortopedic;
    cout <<"\n\tModel name: "<< m_model_name;
    cout << "\n\tBrand: "<<a;
    m_insole_size.Print();
    cout <<"\n\tUsd: "<< m_price_usd;
    cout <<"\n\tAnti-Slip sole: "<< m_anti_slip_sole;
    cout <<"\n\tSeason: "<< b;
    cout << "\n---------------------"<<endl;
}
Shoes* Boots::clone() {
    return (Shoes*)new Boots(*this);
}

char Boots::GetType() {
    return 'F';
}

//
//void Boots::More39() {
//    if(m_insole_size.getSize() >=39) {
//        Print();
//    }
//}

//void Boots::NikePuma(){
//    if(m_is_ortopedic == 1 && ( m_brand == Brand::nike || m_brand ==Brand::puma)){
//        Print();
//    }
//}


bool operator==(const Sneakers& A, const Sneakers& B){
    bool  result = true;
    if (A.getOrtopedic() == B.getOrtopedic()
        && A.getModelName() == B.getModelName()
        && A.getPrice() == B.getPrice()
        && A.getBrand() == B.getBrand()
        && A.getInsole().getLength() == B.getInsole().getLength()
        && A.getInsole().getSize() == B.getInsole().getSize()
        && A.getPurpose() == B.getPurpose()
        && A.getRunning() == B.getRunning()){
        result &= true;
    }else{
        result &= false;
    }
    return result;
}

bool operator==(const Boots& A, const Boots& B){
    bool  result = true;
    if (A.getOrtopedic() == B.getOrtopedic()
        && A.getModelName() == B.getModelName()
        && A.getPrice() == B.getPrice()
        && A.getBrand() == B.getBrand()
        && A.getInsole().getLength() == B.getInsole().getLength()
        && A.getInsole().getSize() == B.getInsole().getSize()
        && A.getSeason() == B.getSeason()
        && A.getAntiSlip() == B.getAntiSlip()){
        result &= true;
    }else{
        result &= false;
    }
    return result;
}
