/**
 * @file book.cpp
 * @brief File that performs methods of the basic class
 *
 * @author Klymenko S.
 * @date 29-may-2021
 * @version 1.0
 */
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
    cout.width(14);
    cout <<  size<<" |";
    cout.width(14);
    cout <<  length<<" |";
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

    cout  << "|";
    cout.width(10);
    cout  <<m_is_ortopedic<<" |";
    cout.width(13);
    cout << m_model_name<<" |";
    cout.width(16);
    cout <<a<<" |";
    m_insole_size.Print();
    cout.width(14);
    cout << m_price_usd<<" |";
    cout.width(28);
    if(m_is_running == 1) cout << "Running |";
    else cout << "No |";
    cout.width(17);
    cout << b<<" |";
}

Shoes* Sneakers::clone() {
    return (Shoes*)new Sneakers(*this);
}

char Sneakers::GetType() {
    return 'L';
}

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

    cout  << "|";
    cout.width(10);
    cout  <<m_is_ortopedic<<" |";
    cout.width(13);
    cout << m_model_name<<" |";
    cout.width(16);
    cout <<a<<" |";
    m_insole_size.Print();
    cout.width(14);
    cout << m_price_usd<<" |";
    cout.width(28);
    if(m_anti_slip_sole == 1) cout << "Have |";
    else cout << "No |";
    cout.width(17);
    cout << b<<" |";
}
Shoes* Boots::clone() {
    return (Shoes*)new Boots(*this);
}

char Boots::GetType() {
    return 'F';
}

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

void Sneakers::SearchSize(){
    cout<<" "<<getInsole().getSize()<< " ";
}

void Boots::SearchSize(){
    cout<<" "<<getInsole().getSize()<< " ";
}

void Sneakers::SearchLength() {
    cout<<" "<<getInsole().getLength()<< " ";
}

void Boots::SearchLength(){
    cout<<" "<<getInsole().getLength()<< " ";
}

void Sneakers::SearchUSD(){
    cout<<" "<<getPrice()<< " ";
}

void Boots::SearchUSD(){
    cout<<" "<<getPrice()<< " ";
}
void Sneakers::SearchOrt(){
    cout<<"  "<<getOrtopedic()<< " ";
}

void Boots::SearchOrt(){
    cout<<"  "<<getOrtopedic()<< " ";
}

void Sneakers::SearchBrand() {
    std::string a ;

    if (m_brand == Brand::nike)
        cout <<"Nike ";
    else if (m_brand == Brand::rebook)
        cout <<"Rebook ";
    else if (m_brand == Brand::adidas)
        cout <<"Adidas ";
    else if (m_brand == Brand::puma)
        cout <<"Puma ";
    else cout <<"No brand ";
}

void Boots::SearchBrand(){
    std::string a ;

    if (m_brand == Brand::nike)
        cout <<"Nike ";
    else if (m_brand == Brand::rebook)
        cout <<"Rebook ";
    else if (m_brand == Brand::adidas)
        cout <<"Adidas ";
    else if (m_brand == Brand::puma)
        cout <<"Puma ";
    else cout <<"No brand ";
}

void Sneakers::SaveInFile(FILE * file_out){
    fprintf(file_out, "Model name: %s", m_model_name.c_str());
        fprintf(file_out,"\nBrand name: ");
        if (m_brand == Brand::nike)
            fprintf(file_out,"Nike\n");
        else if (m_brand == Brand::rebook)
            fprintf(file_out,"Rebook\n");
        else if (m_brand == Brand::adidas)
            fprintf(file_out,"Adidas\n");
        else if (m_brand == Brand::puma)
            fprintf(file_out,"Puma\n");
        else fprintf(file_out,"No brand\n");
        fprintf(file_out,"Ortopedic: ");
        if(m_is_ortopedic == 1) fprintf(file_out,"Yes\n");
        else fprintf(file_out,"No\n");
        fprintf(file_out,"USD: %d", m_price_usd);
        fprintf(file_out,"\nSize: %d", getInsole().getSize());
        fprintf(file_out,"\nLength: %d\n" ,getInsole().getLength());
        if (getPurpose() == Purpose::casual)
            fprintf(file_out,"Casual\n");
        else if (getPurpose() == Purpose::sport)
            fprintf(file_out,"Sport\n");
        else fprintf(file_out,"Undef\n");
        fprintf(file_out,"Running: ");
        if(getRunning() == 1) fprintf(file_out,"Yes\n");
        else fprintf(file_out,"No\n");
        fprintf(file_out,"\n-----------------------------------\n\n");

}

void Boots::SaveInFile(FILE * file_out){
    fprintf(file_out, "Model name: %s", (getModelName()).c_str());//file_out<<"Model name: "<< temp1->getModelName()<<endl;
        fprintf(file_out,"\nBrand name: ");
        if (getBrand() == Brand::nike)
            fprintf(file_out,"Nike\n");
        else if (getBrand() == Brand::rebook)
            fprintf(file_out,"Rebook\n");
        else if (getBrand() == Brand::adidas)
            fprintf(file_out,"Adidas\n");
        else if (getBrand() == Brand::puma)
            fprintf(file_out,"Puma\n");
        else fprintf(file_out,"No brand\n");
        fprintf(file_out,"Ortopedic: ");
        if(getOrtopedic() == 1) fprintf(file_out,"Yes\n");
        else fprintf(file_out,"No\n");
        fprintf(file_out,"USD: %d", getPrice());
        fprintf(file_out,"\nSize: %d", getInsole().getSize());
        fprintf(file_out,"\nLength: %d" ,getInsole().getLength());
        if (getSeason() == winter)
            fprintf(file_out,"\nWinter\n");
        else if (getSeason() == spring)
            fprintf(file_out,"\nSpring\n");
        else fprintf(file_out,"\nAutumn\n");
        fprintf(file_out,"AntiSlip sole: ");
        if(getAntiSlip() == 1) fprintf(file_out,"Yes\n");
        else fprintf(file_out,"No\n");
        fprintf(file_out,"\n-----------------------------------\n\n");
}

