//#include <string>
//#include <fstream>
//#include <sstream>
//#include <cstdlib>
//#include <iostream>
//
//#pragma warning (disable: 4996)
//
//using std::string;
//using std::cin;
//using std::cout;
//using std::endl;
//
//class ShoesBase
//{
//public:
//    struct insole
//    {
//        int size = 0;
//        int length = 0;
//    };
//    enum class Brand
//    {
//        no_brand,
//        adidas,
//        puma,
//        rebook,
//        nike,
//    };
//protected:
//    bool m_is_ortopedic;
//    std::string m_model_name;
//    int m_price_usd;
//    Brand m_brand;
//    insole m_insole_size;
//public:
//    ShoesBase()
//            : m_is_ortopedic(false)
//            , m_price_usd(0)
//            , m_brand(Brand::no_brand)
//    {
////        cout<<"Вызвался конструктор ShoesBase()"<<this;//endl;
//    }
//    ShoesBase(const ShoesBase& other)
//            : m_is_ortopedic(other.m_is_ortopedic)
//            , m_model_name(other.m_model_name)
//            , m_price_usd(other.m_price_usd)
//            , m_brand(other.m_brand)
//            , m_insole_size(other.m_insole_size)
//    {
////        cout<<"Вызвался конструктор ShoesBase(1)"<<this;//endl;
//    }
//    ShoesBase & operator = (const ShoesBase& other)
//    {
////        cout<<"Вызвался оператор присваивания "<<this;//endl;
//        if(this->m_price_usd!=0){
//            this->m_price_usd=0;
//            this->m_is_ortopedic=0;
//            this->m_insole_size.length=0;
//            this->m_insole_size.size=0;
//        }
//        this->m_price_usd = other.m_price_usd;
//        this->m_insole_size = other.m_insole_size;
//        this->m_is_ortopedic = other.m_is_ortopedic;
//        this->m_brand = other.GetBrand();
//        this->m_model_name = other.m_model_name;
//        return *this;
//    }
//
//    bool operator == (const ShoesBase& other){
//        if(this->m_price_usd == other.m_price_usd){
//            return true;
//        } else if(this->m_insole_size.size == other.m_insole_size.size){
//            return true;
//        }else if(this->m_insole_size.length == other.m_insole_size.length){
//            return true;
//        }else if(this->m_is_ortopedic == other.m_is_ortopedic){
//            return true;
//        }else if(this->m_brand == other.GetBrand()){
//            return true;
//        }else if(this->m_model_name == other.m_model_name){
//            return true;
//        } else return false;
//    }
//
//    friend std::ostream & operator << (std::ostream& os, const ShoesBase& Shoes){
//        std::string a ;
//        if (Shoes.GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (Shoes.GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (Shoes.GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (Shoes.GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        os<<"\tModel: " << Shoes.GetModelName() << endl<<"\tBrand: " << a << "\n\tOrtopedic: " << (Shoes.GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(Shoes.GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes.GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes.GetInsoleLength()) << "\n-----------------------------------\n";
//        return os;
//    }
//    ShoesBase(bool is_ortopedic, const std::string& model_name, int price_usd, const insole& insole_size, Brand brand)
//            : m_is_ortopedic(is_ortopedic)
//            , m_model_name(model_name)
//            , m_price_usd(price_usd)
//            , m_brand(brand)
//            , m_insole_size(insole_size)
//    {}
//    virtual  ~ShoesBase()
//    {}
//
//    virtual bool GetIsOrtopedic() const =0;
//    virtual const std::string& GetModelName() const= 0;
//    virtual int GetPriceUSD() const= 0;
//    virtual int GetInsoleLength() const =0;
//    virtual int GetInsoleSize() const =0;
//    virtual Brand GetBrand() const = 0;
//
//    string toString(){
//        std::stringstream ss;
//        std::string a ;
//        if (this->GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (this->GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (this->GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (this->GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        ss<< "\tModel: " << this->GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (this->GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(this->GetPriceUSD()) << "\n\tSize: " << std::to_string(this->GetInsoleSize()) << "\n\tLength: " << std::to_string(this->GetInsoleLength()) << "\n";
//        return ss.str();
//    }
//
//};
//
//class Sneakers : public ShoesBase
//{
//public:
//    enum class Purpose
//    {
//        undef,
//        sport,
//        casual,
//    };
//private:
//    bool m_is_running;
//    Purpose m_purpose;
//public:
//    Sneakers()
//            : ShoesBase()
//            , m_is_running(false)
//            , m_purpose(Purpose::undef)
//    {}
//
//    Sneakers(bool is_ortopedic, const std::string& model_name, int price_usd, const insole& insole_size, Brand brand, bool is_running, Purpose purpose)
//            : ShoesBase(is_ortopedic, model_name, price_usd, insole_size, brand)
//            , m_is_running(is_running)
//            , m_purpose(purpose)
//    {}
//
//    Sneakers(const ShoesBase& other, bool m_is_running, Purpose m_purpose)
//            : ShoesBase(other)
//            , m_is_running(m_is_running)
//            , m_purpose(m_purpose)
//    {}
//    bool GetIsRunning() const{
//        return m_is_running;
//    }
//
//    Purpose GetPurpose() const{
//        return m_purpose;
//    }
//    bool GetIsOrtopedic() const override {
//        return this->m_is_ortopedic;
//    }
//    const std::string& GetModelName()const override{
//        return this->m_model_name;
//    }
//    int GetPriceUSD() const override{
//        return this->m_price_usd;
//    }
//    int GetInsoleLength() const override{
//        return this->m_insole_size.length;
//    }
//    int GetInsoleSize() const override{
//        return this->m_insole_size.size;
//    }
//    Brand GetBrand() const override{
//        return this->m_brand;
//    }
//
//
//    friend std::ostream & operator << (std::ostream& os, const Sneakers& Shoes){
//        std::string a ;
//        std::string b ;
//        if (Shoes.GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (Shoes.GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (Shoes.GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (Shoes.GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        if (Shoes.GetPurpose() == Sneakers::Purpose::sport)
//            b = "Sport";
//        else if (Shoes.GetPurpose() == Sneakers::Purpose::casual)
//            b = "Casual";
//        else b = "Undef";
//        os<< "\tModel: " << Shoes.GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (Shoes.GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(Shoes.GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes.GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes.GetInsoleLength()) << "\n\tPurpose: "<< b << "\n\tIs Runing: "<< (Shoes.GetIsRunning()?"Yes" : "No")<<"\n";
//        return os;
//    }
//    string toStringSneakers(){
//        std::stringstream ss;
//        std::string a ;
//        std::string b ;
//        if (this->GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (this->GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (this->GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (this->GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        if (this->GetPurpose() == Sneakers::Purpose::sport)
//            b = "Sport";
//        else if (this->GetPurpose() == Sneakers::Purpose::casual)
//            b = "Casual";
//        else b = "Undef";
//        ss<< "\tModel: " << this->GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (this->GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(this->GetPriceUSD()) << "\n\tSize: " << std::to_string(this->GetInsoleSize()) << "\n\tLength: " << std::to_string(this->GetInsoleLength()) << "\n\tPurpose: "<< b << "\n\tIs Runing: "<< (this->GetIsRunning()?"Yes" : "No")<<"\n";
//        return ss.str();
//    }
//};
//
//class Boots : public ShoesBase
//{
//public:
//    enum class Season
//    {
//        undef,
//        winter,
//        autumn,
//        spring
//    };
//private:
//    bool m_anti_slip_sole;
//    Season m_season;
//public:
//    Boots()
//            : ShoesBase()
//            , m_anti_slip_sole(false)
//            , m_season(Season::undef)
//    {}
//
//    Boots(bool is_ortopedic, const std::string& model_name, int price_usd, const insole& insole_size, Brand brand, bool anti_slip_sole, Season season)
//            : ShoesBase(is_ortopedic, model_name, price_usd, insole_size, brand)
//            , m_anti_slip_sole(anti_slip_sole)
//            , m_season(season)
//    {}
//
//    Boots(const ShoesBase& other, bool m_is_running, Season m_season)
//            : ShoesBase(other)
//            , m_anti_slip_sole(m_anti_slip_sole)
//            , m_season(m_season)
//    {}
//    ~Boots(){}
//
//    bool GetAntiSlipSole() const
//    {
//        return m_anti_slip_sole;
//    }
//
//    Season GetSeason() const
//    {
//        return m_season;
//    }
//    bool GetIsOrtopedic() const override {
//        return this->m_is_ortopedic;
//    }
//    const std::string& GetModelName()const override{
//        return this->m_model_name;
//    }
//    int GetPriceUSD() const override{
//        return this->m_price_usd;
//    }
//    int GetInsoleLength() const override{
//        return this->m_insole_size.length;
//    }
//    int GetInsoleSize() const override{
//        return this->m_insole_size.size;
//    }
//    Brand GetBrand() const override{
//        return this->m_brand;
//    }
//    friend std::ostream & operator << (std::ostream& os, const Boots& Shoes){
//        std::string a ;
//        std::string b ;
//        if (Shoes.GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (Shoes.GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (Shoes.GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (Shoes.GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        if (Shoes.GetSeason() == Boots::Season::spring)
//            b ="Spring";
//        else if (Shoes.GetSeason() == Boots::Season::winter)
//            b = "Wisual";
//        else if (Shoes.GetSeason() == Boots::Season::autumn)
//            b ="Autumn";
//        else b ="Undef";
//        os<< "\tModel: " << Shoes.GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (Shoes.GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(Shoes.GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes.GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes.GetInsoleLength()) << "\n\tSeason: "<< b << "\n\tAnti-slip sole: "<< (Shoes.GetAntiSlipSole()?"Yes" : "No")<<"\n";
//        return os;
//    }
//    string toStringBoots(){
//        std::stringstream ss;
//        std::string a ;
//        std::string b ;
//        if (this->GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (this->GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (this->GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (this->GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        if (this->GetSeason() == Boots::Season::spring)
//            b ="Spring";
//        else if (this->GetSeason() == Boots::Season::winter)
//            b = "Wisual";
//        else if (this->GetSeason() == Boots::Season::autumn)
//            b ="Autumn";
//        else b ="Undef";
//        ss<< "\tModel: " << this->GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (this->GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(this->GetPriceUSD()) << "\n\tSize: " << std::to_string(this->GetInsoleSize()) << "\n\tLength: " << std::to_string(this->GetInsoleLength()) << "\n\tSeason: "<< b << "\n\tAnti-slip sole: "<< (this->GetAntiSlipSole()?"Yes" : "No")<<"\n";
//        return ss.str();
//    }
//};
//
//class ArrayShoes {
//private:
//    int Size;
////    AllArray botinki;
//    Sneakers *sneakers;// = new ShoesBase[Size_array];
//    Boots *boots;
//public:
//    ArrayShoes(int Size)
//    {
//        sneakers = new Sneakers[Size];// = new ShoesBase[Size_array];
//        boots = new Boots[Size];// = new ShoesBase[Size_array];
//        Size = Size;
////        cout<<"Вызвался конструктор ArrayShoes(1)"<<this;//endl;
//    }
//
//    void AddToArray(Sneakers* other)
//    {
//        for(int i = 0; i < Size; i++)
//        {
//            sneakers[i] = other[i];
//        }
//    }
//
//    void AddToArray(Boots* other)
//    {
//        for (int i = 0; i < Size; i++)
//        {
//            boots[i] = other[i];
//        }
//    }
//
//    void PrintAboutShoes(int i)
//    {
//        if(i == 1) {
//            for (int i = 0; i < Size; i++) {
////                for(int i =0; i<Size_array; i++){
//                    //\33[1:33m[INFO]\33[0m
//                    cout << "\33[1:33mShoes #" << i+1 << ":\33[0m";
//                    cout<< "\n\tModel name: "<<this->sneakers[i].GetModelName()<<endl;
//                    cout<< "\tBrand name: ";
//                    if (this->sneakers[i].GetBrand() == ShoesBase::Brand::nike)
//                        cout << "Nike"<<endl;
//                    else if (this->sneakers[i].GetBrand() == ShoesBase::Brand::rebook)
//                        cout << "Rebook"<<endl;
//                    else if (this->sneakers[i].GetBrand() == ShoesBase::Brand::adidas)
//                        cout << "Adidas"<<endl;
//                    else if (this->sneakers[i].GetBrand() == ShoesBase::Brand::puma)
//                        cout << "Puma"<<endl;
//                    else cout << "No brand"<<endl;
//                    cout<< "\tOrtopedic: "<<(this->sneakers[i].GetIsOrtopedic() ? "Yes" : "No" )<<endl;
//                    cout<< "\tUSD: "<<this->sneakers[i].GetPriceUSD()<<endl;
//                    cout<< "\tSize: "<<this->sneakers[i].GetInsoleSize()<<endl;
//                    cout<< "\tLength: "<<this->sneakers[i].GetInsoleLength()<<endl;
//                    cout<< "\n-----------------------------------\n\n";
////                }
//            }
//        } else {
//            for (int i = 0; i < Size; i++) {
//                cout << "\33[1:33mShoes #" << i + 1 << ":\33[0m\n";
//                cout << this->boots[i];
//            }
//        }
//    }
//
//
//};
//
//int main(){
////    AllArray *array = new AllArray(4);
//    ArrayShoes *arr = new ArrayShoes(4);
//
//    Sneakers *sneakers = new Sneakers[4];
//    sneakers[0] = {Sneakers(true, "Ingnite", 2990, ShoesBase::insole{37, 24}, ShoesBase::Brand::puma, true,
//                                Sneakers::Purpose::sport)};
//    sneakers[1] = {Sneakers(false, "Response", 2590, ShoesBase::insole{ 46, 22 }, ShoesBase::Brand::adidas, true,
//            Sneakers::Purpose::casual)};
//    sneakers[2] = {Sneakers(true, "Wearajjday", 2730, ShoesBase::insole{ 40, 26 }, ShoesBase::Brand::rebook, false,
//            Sneakers::Purpose::sport)};
//    sneakers[3] = {Sneakers(false, "Tanjun", 2690, ShoesBase::insole{ 31, 25 }, ShoesBase::Brand::nike, true,
//            Sneakers::Purpose::sport)};
//    arr->AddToArray(sneakers);
//
//    Boots * boots = new Boots[4];
//    boots[0]= {Boots(true, "Ingnite", 2990, ShoesBase::insole{37, 24}, ShoesBase::Brand::puma, true,
//                               Boots::Season::autumn)};
//    boots[1]= {Boots(false, "Response", 2590, ShoesBase::insole{46, 22}, ShoesBase::Brand::adidas, true,
//                               Boots::Season::spring)};
//    boots[2]= {Boots(true, "Wearajjday", 2730, ShoesBase::insole{40, 26}, ShoesBase::Brand::rebook, false,
//                               Boots::Season::winter)};
//    boots[3]= {Boots(false, "Tanjun", 2690, ShoesBase::insole{41, 25}, ShoesBase::Brand::nike, true,
//                               Boots::Season::spring)};
//    arr->AddToArray(boots);
//    arr->PrintAboutShoes(1);
////    arr->PrintAboutShoes(2);
//
//}