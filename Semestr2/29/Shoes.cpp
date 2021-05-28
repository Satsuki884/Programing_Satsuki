#include "Shoes.h"

//|------------------------FIRM------------------------|\\

Insole::Insole() : size(), length() {
//cout << "\ndefault constructor <Firm> " << endl;
}

Insole::Insole(int size, int length): size(size), length(length){
    //cout << "\nConstructor with arguments <Firm> " << endl;
}

Insole::Insole(const Insole &copy) : size(copy.size), length(copy.length) {
    //cout << "\nCopy constructor <Firm> " << endl;
}

Insole::~Insole() = default; // {
//    cout << "\nDestructor <Firm>" << endl;
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


//|------------------------BACKPACK------------------------|\\

Shoes::Shoes() : m_is_ortopedic(0), m_model_name(), m_price_usd(0), m_brand(Brand::no_brand), m_insole_size() {}

Shoes::Shoes(bool m_is_ortopedic,  string m_model_name, int m_price_usd, const Brand m_brand, Insole& m_insole_size):
        m_is_ortopedic(m_is_ortopedic), m_model_name(m_model_name), m_price_usd(m_price_usd), m_brand(m_brand), m_insole_size(m_insole_size){}

Shoes::Shoes(const Shoes &copy):
        m_is_ortopedic(copy.m_is_ortopedic), m_model_name(copy.m_model_name), m_price_usd(copy.m_price_usd), m_brand(copy.m_brand), m_insole_size(copy.m_insole_size){}



bool Shoes::getOrtopedic() const{
    return m_is_ortopedic;
}
string Shoes::getModelName() const{
    return m_model_name;
}
int Shoes::getPrice() const{
    return  m_price_usd;
}
Brand Shoes::getBrand() const{
    return m_brand;
}
Insole Shoes::getInsole() const{
    return m_insole_size;
}

void Shoes::setOrtopedic(const bool ortopedic){
    this->m_is_ortopedic = ortopedic;
}
void Shoes::setModel(const string model_name){
    this->m_model_name = model_name;
}
void Shoes::setPrice(const int price_usd){
    this->m_price_usd = price_usd;
}
void Shoes::setBrand(const Brand brand){
    this->m_brand = brand;
}
void Shoes::setInsole( Insole insole){
    this->m_insole_size.setSize(insole.getSize());// = insole;
    this->m_insole_size.setLength(insole.getLength());// = insole;
}


void Shoes:: Print(){
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


    cout  << "\n\tOrtopedic: "<<m_is_ortopedic;
    cout <<"\n\tModel name: "<< m_model_name;
    cout << "\n\tBrand: "<<a;
    m_insole_size.Print();
    cout <<"\n\tUsd: "<< m_price_usd;
    cout << "\n---------------------"<<endl;
}

ostream & operator<<(ostream &out ,const Shoes& shoes) {
//    std::string a ;
//    if (shoes.getBrand() == Brand::nike)
//        a = "Nike";
//    else if (shoes.getBrand() == Brand::rebook)
//        a = "Rebook";
//    else if (shoes.getBrand() == Brand::adidas)
//        a = "Adidas";
//    else if (shoes.getBrand() == Brand::puma)
//        a = "Puma";
//    else a = "No brand";
//    out.width(17);
//    out  << shoes.getOrtopedic();
//    out.width(15);
//    out << shoes.getModelName();
//    out.width(17);
//    out << shoes.getPrice();
//    out.width(18);
//    out << a;
//    out.width(15);
//    out << shoes.getInsole().getSize();
//    out.width(18);
//    out << shoes.getInsole().getLength();
    std::string a ;
    std::string b ;
    if (shoes.getBrand() == Brand::nike)
        a = "Nike";
    else if (shoes.getBrand() == Brand::rebook)
        a = "Rebook";
    else if (shoes.getBrand() == Brand::adidas)
        a = "Adidas";
    else if (shoes.getBrand() == Brand::puma)
        a = "Puma";
    else a = "No brand";
//
//    if (enumPurpose == Type::casual)
//        b = "Casual";
//    else if (enumPurpose == Type::sport)
//        b = "Sport";
//    else b = "Undef";

    cout  << "\n\tOrtopedic: "<<shoes.getOrtopedic();
    cout <<"\n\tModel name: "<< shoes.getModelName();
    cout << "\n\tBrand: "<<a;
    shoes.getInsole().Print();
//    cout <<"\n\tUsd: "<< shoes.getPrice();
//    cout <<"\n\tRunning: "<< m_is_running;
//    cout <<"\n\tPurpose: "<< b;
//    cout << "\n---------------------"<<endl;
    return out;
}

bool operator>(const Shoes& A, const Shoes& B){
    bool result;
    if (A.getPrice() > B.getPrice() )
        result = true;
    else
        result = false;
    return result;
}

bool operator==(const Shoes& A, const Shoes& B){
    bool  result = true;
    if (A.getBrand() == B.getBrand()
        && A.getOrtopedic() == B.getOrtopedic()
        && A.getModelName() == B.getModelName()
        && A.getPrice() == B.getPrice()
        && A.getInsole().getSize() == B.getInsole().getSize()
        && A.getInsole().getLength() == B.getInsole().getLength()){
        result &= true;
    }else{
        result &= false;
    }
    return result;
}

bool operator!=(const Shoes& A, const Shoes& B){
    bool  result = true;
    if (A.getBrand() != B.getBrand()
        && A.getOrtopedic() != B.getOrtopedic()
        && A.getModelName() != B.getModelName()
        && A.getPrice() != B.getPrice()
        && A.getInsole().getSize() != B.getInsole().getSize()
        && A.getInsole().getLength() != B.getInsole().getLength()){
        result &= true;
    }else{
        result &= false;
    }
    return result;
}

//|--------------------Наследник 1--------------------|\\

Sneakers::Sneakers() {}

Sneakers::Sneakers(bool ortopedic,  string model_name, int price_usd, const Brand brand, Insole insole_size, Type Purpose, bool running) :
        enumPurpose(enumPurpose), m_is_running(m_is_running) {
    setOrtopedic(ortopedic);// = ortopedic;
    setModel(model_name); //= model_name;
    setPrice(price_usd);// = price_usd;
    setBrand(brand);// = brand;
    setInsole(insole_size);// = insole_size;
}
Sneakers::Sneakers(Sneakers &copy):
        enumPurpose(copy.enumPurpose), m_is_running(copy.m_is_running){
    setOrtopedic(copy.getOrtopedic());// = ortopedic;
    setModel(copy.getModelName()); //= model_name;
    setPrice(copy.getPrice());// = price_usd;
    setBrand(copy.getBrand());// = brand;
    setInsole(copy.getInsole());// = insole_size;
}

Sneakers:: ~Sneakers() {}



bool Sneakers::getRunning() const{
    return m_is_running;
}
void Sneakers::setPurpose(const Type Purpose){
    this->enumPurpose = Purpose;
}
void Sneakers::setRunning(const bool running){
    this->m_is_running = running;
}

void Sneakers:: Print(){
    std::string a ;
    std::string b ;
    if (getBrand() == Brand::nike)
        a = "Nike";
    else if (getBrand() == Brand::rebook)
        a = "Rebook";
    else if (getBrand() == Brand::adidas)
        a = "Adidas";
    else if (getBrand() == Brand::puma)
        a = "Puma";
    else a = "No brand";

    if (enumPurpose == Type::casual)
        b = "Casual";
    else if (enumPurpose == Type::sport)
        b = "Sport";
    else b = "Undef";

    cout  << "\n\tOrtopedic: "<<getOrtopedic();
    cout <<"\n\tModel name: "<< getModelName();
    cout << "\n\tBrand: "<<a;
    getInsole().Print();
    cout <<"\n\tUsd: "<< getPrice();
    cout <<"\n\tRunning: "<< m_is_running;
    cout <<"\n\tPurpose: "<< b;
    cout << "\n---------------------"<<endl;
}