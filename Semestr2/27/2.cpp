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
//private:
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
//    {
////    cout<<"Вызвался конструктор ShoesBase(5) "<<this;//endl;
//    }
//    virtual  ~ShoesBase()
//    {
////        cout<<"Вызвался деструктор ShoesBase()"<<this;//endl;
//    }
//
//    bool GetIsOrtopedic() const{
//        return m_is_ortopedic;
//    }
//
//    const std::string& GetModelName() const{
//        return m_model_name;
//    }
//
//    int GetPriceUSD() const{
//        return m_price_usd;
//    }
//
//    int GetInsoleLength() const{
//        return m_insole_size.length;
//    }
//    int GetInsoleSize() const{
//        return m_insole_size.size;
//    }
//
//    Brand GetBrand() const{
//        return m_brand;
//    }
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
//class ArrayShoes{
//private:
//    int Size_array;
//    ShoesBase* Shoes;// = new ShoesBase[Size_array];
//public:
//    ArrayShoes(int Size_array)
//            : Shoes(new ShoesBase[Size_array])
//            , Size_array(Size_array)
//    {
////        cout<<"Вызвался конструктор ArrayShoes(1)"<<this;//endl;
//    }
//    ShoesBase & operator [](const int index){
//        return Shoes[index];
//    }
//
//    ~ArrayShoes(){
//        delete[] this->Shoes;
////        cout<<"Вызвался деструктор ArrayShoes()"<<this;//endl;
//    }
//
//    void createArrayShoes(){
//        Shoes[0] = ShoesBase(true, "Ingnite", 2990,ShoesBase::insole{37, 24}, ShoesBase::Brand::puma);
//        Shoes[1]=  ShoesBase(false, "Response", 2590,ShoesBase::insole{46, 22}, ShoesBase::Brand::adidas);
//        Shoes[2]=  ShoesBase(true, "Wearajjday", 2730,ShoesBase::insole{40, 26}, ShoesBase::Brand::rebook);
//        Shoes[3]=  ShoesBase(false, "Tanjun", 2690, ShoesBase::insole{31, 25}, ShoesBase::Brand::nike);
//    //ReadFromFile();
//
//    };
//
//    void show_array(){
//        for(int i =0; i<Size_array; i++){
//            cout << "\33[1:33mShoes #" << i+1 << ":\33[0m\n";
//            cout << this->Shoes[i];
//        }
//    }
//
//    void add_object(ShoesBase & new_element){
//        int a= -1;
//        for(int i=0; i <Size_array; i++){
//            if(this->Shoes[i].GetPriceUSD() == 0) {
//                a=i;
//                break;
//            }
//        }
//        if(a < 0){
//            ShoesBase *Shoes_new = new ShoesBase[Size_array+1];
//            for(int i=0; i< Size_array; i++){
//                Shoes_new[i]= Shoes[i];
//            }
//            Shoes= Shoes_new;
//            a = Size_array;
//            Size_array++;
//            delete[] Shoes_new;
//        }
//        Shoes[a] = new_element;
//        show_array();
//    }
//    void test_insert(ShoesBase & new_element) {
//        int n = size_array();
//        int a= Size_array;
//        auto *Test = new ShoesBase[1];
//        Test[0] = ShoesBase(true, "Gaw", 3000,ShoesBase::insole{35, 20}, ShoesBase::Brand::puma);
//        if (n == a){
//            if(Test->GetIsOrtopedic() != new_element.GetIsOrtopedic()){
//                cout<<"\33[1:31mТест провален1.\33[0m" << endl;
//            }else if (Test->GetPriceUSD() != new_element.GetPriceUSD()){
//                cout<<("\33[1:31mТест провален2.\33[0m") << endl;
//            }else if (Test->GetModelName() != new_element.GetModelName()){
//                cout<<("\33[1:31mТест провален3.\33[0m") << endl;
//            }else if (Test->GetInsoleSize() != new_element.GetInsoleSize()){
//                cout<<("\33[1:31mТест провален4.\33[0m") << endl;
//            }else if (Test->GetInsoleLength() != new_element.GetInsoleLength()){
//                cout<<("\33[1:31mТест провален5.\33[0m") << endl;
//            } else cout<<("\33[1:32mТест пройден успешно.\33[0m") << endl;
//        }
//        else cout<<("\33[1:31mТест провален6.\33[0m") << endl;
//    }
//
//    ShoesBase Get_object(int index){
//        return Shoes[index];
//    }
//    string toString(int index){
//        std::stringstream ss;
//        std::string a ;
//        if (Shoes[index].GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        ss<< "\tModel: " << Shoes[index].GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (Shoes[index].GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(Shoes[index].GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes[index].GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes[index].GetInsoleLength()) << "\n";
//        return ss.str();
//    }
//
//    void delete_element(int index){
//        if(index <0) index =0;
//        else if(index>=Size_array) index = Size_array-1;
//        ShoesBase *Shoes_new = new ShoesBase[Size_array-1];
//        for(int i =0; i <index; i++ ){
//            Shoes_new[i]= Shoes[i];
//        }
//        for(int i =index+1; i <Size_array; i++ ){
//            Shoes_new[i-1]= Shoes[i];
//        }
//        Shoes = Shoes_new;
//        Size_array--;
//        show_array();
//    }
//    int size_array (){
//        return Size_array;
//    }
//    void test_remove() {
//        int n = size_array();
//        int a= Size_array;
//        if (n == a) cout<<("\33[1:32mТест пройден успешно.\33[0m")<<endl;
//        else cout<<("\33[1:31mТест провален5.\33[0m")<<endl;
//    }
//
//    void SaveInFile(std::ofstream &file){
//        for(int i = 0; i< Size_array; i++){
//            file << toString(i) << endl;
//        }
//    }
//    int size(){
//        int cout = 0;
//        for(int i =0; i < Size_array; i++) {
//            if ( (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::nike)) || (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::puma)) ) {
//                cout++;
//            }
//        }
//        return cout;
//    }
//    ShoesBase OrtopedicNikePuma(){
//        ShoesBase * new_array = new ShoesBase[size()];
////        int i =0;
//        int k =0;
//        for(int i =0; i < Size_array; i++) {
//            if ( (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::nike)) || (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::puma)) ) {
//                new_array[k] = Shoes[i];
//                cout << "\33[1:33mShoes #" << i+1 << ":\33[0m";
//                cout<<Get_object(i).toString()<<endl;
//                cout << "\n---------------------------------------\n\n";
//                k++;
//            }
//        }
//        delete [] Shoes;
//        Shoes = new_array;
//        return *Shoes;
//    }
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
//    bool GetIsRunning() const
//    {
//        return m_is_running;
//    }
//
//    Purpose GetPurpose() const
//    {
//        return m_purpose;
//    }
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
//class ArraySneakers {
//private:
//    int Size_array;
//    Sneakers* Shoes;// = new ShoesBase[Size_array];
//public:
//    ArraySneakers(int Size_array)
//            : Shoes(new Sneakers[Size_array])
//            , Size_array(Size_array)
//    {
////        cout<<"Вызвался конструктор ArrayShoes(1)"<<this;//endl;
//    }
//
//    ~ArraySneakers(){
//        delete[] this->Shoes;
////        cout<<"Вызвался деструктор ArrayShoes()"<<this;//endl;
//    }
//    Sneakers & operator [](const int index){
//        return Shoes[index];
//    }
//    void createArraySneakers(){
//        Shoes[0] = Sneakers(true, "Ingnite", 2990,ShoesBase::insole{37, 24}, ShoesBase::Brand::puma, true, Sneakers::Purpose::sport);
//        Shoes[1]=  Sneakers(false, "Response", 2590,ShoesBase::insole{46, 22}, ShoesBase::Brand::adidas,true, Sneakers::Purpose::casual);
//        Shoes[2]=  Sneakers(true, "Wearajjday", 2730,ShoesBase::insole{40, 26}, ShoesBase::Brand::rebook, false, Sneakers::Purpose::sport);
//        Shoes[3]=  Sneakers(false, "Tanjun", 2690, ShoesBase::insole{31, 25}, ShoesBase::Brand::nike,true,Sneakers::Purpose::sport );
//        //ReadFromFile();
//
//    };
//
//    void show_arraySneakers(){
//        for(int i =0; i<Size_array; i++){
//            cout << "\33[1:33mShoes #" << i+1 << ":\33[0m\n";
//            cout << this->Shoes[i];
//        }
//    }
//
//    void add_objectSneakers(Sneakers & new_element){
//        int a= -1;
//        for(int i=0; i <Size_array; i++){
//            if(this->Shoes[i].GetPriceUSD() == 0) {
//                a=i;
//                break;
//            }
//        }
//        if(a < 0){
//            Sneakers *Shoes_new = new Sneakers[Size_array+1];
//            for(int i=0; i< Size_array; i++){
//                Shoes_new[i]= Shoes[i];
//            }
//            Shoes= Shoes_new;
//            a = Size_array;
//            Size_array++;
//            delete[] Shoes_new;
//        }
//        Shoes[a] = new_element;
//        show_arraySneakers();
//    }
//    void test_insertSneakers(Sneakers & new_element) {
//        int n = size_arraySneakers();
//        int a= Size_array;
//        auto *Test = new ShoesBase[1];
//        Test[0] = Sneakers(true, "Gaw", 3000,ShoesBase::insole{35, 20}, ShoesBase::Brand::puma, true, Sneakers::Purpose::casual);
//        if (n == a){
//            if(Test->GetIsOrtopedic() != new_element.GetIsOrtopedic()){
//                cout<<"\33[1:31mТест провален1.\33[0m" << endl;
//            }else if (Test->GetPriceUSD() != new_element.GetPriceUSD()){
//                cout<<("\33[1:31mТест провален2.\33[0m") << endl;
//            }else if (Test->GetModelName() != new_element.GetModelName()){
//                cout<<("\33[1:31mТест провален3.\33[0m") << endl;
//            }else if (Test->GetInsoleSize() != new_element.GetInsoleSize()){
//                cout<<("\33[1:31mТест провален4.\33[0m") << endl;
//            }else if (Test->GetInsoleLength() != new_element.GetInsoleLength()){
//                cout<<("\33[1:31mТест провален5.\33[0m") << endl;
//            } else cout<<("\33[1:32mТест пройден успешно.\33[0m") << endl;
//        }
//        else cout<<("\33[1:31mТест провален6.\33[0m") << endl;
//    }
//
//    Sneakers Get_objectSneakers(int index){
//        return Shoes[index];
//    }
//    string toStringSneakers(int index){
//        std::stringstream ss;
//        std::string a ;
//        std::string b ;
//        if (Shoes[index].GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        if (Shoes[index].GetPurpose() == Sneakers::Purpose::sport)
//            b = "Sport";
//        else if (Shoes[index].GetPurpose() == Sneakers::Purpose::casual)
//            b = "Casual";
//        else b = "Undef";
//        ss<< "\tModel: " << Shoes[index].GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (Shoes[index].GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(Shoes[index].GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes[index].GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes[index].GetInsoleLength()) << "\n\tPurpose: "<< b << "\n\tIs Runing: "<< (Shoes[index].GetIsRunning()?"Yes" : "No")<<"\n";
//        return ss.str();
//    }
//
//    void delete_elementSneakers(int index){
//        if(index <0) index =0;
//        else if(index>=Size_array) index = Size_array-1;
//        Sneakers *Shoes_new = new Sneakers[Size_array-1];
//        for(int i =0; i <index; i++ ){
//            Shoes_new[i]= Shoes[i];
//        }
//        for(int i =index+1; i <Size_array; i++ ){
//            Shoes_new[i-1]= Shoes[i];
//        }
//        Shoes = Shoes_new;
//        Size_array--;
//        show_arraySneakers();
//    }
//    int size_arraySneakers (){
//        return Size_array;
//    }
//    void test_removeSneakers() {
//        int n = size_arraySneakers();
//        int a= Size_array;
//        if (n == a) cout<<("\33[1:32mТест пройден успешно.\33[0m")<<endl;
//        else cout<<("\33[1:31mТест провален5.\33[0m")<<endl;
//    }
//
//    void CheapRunningShoes() {
//        int min_usd =-1;
//        int index =-1;
//        for (int i = 0; i < Size_array; i++){
//            if(Shoes[index].GetIsRunning() && (min_usd < 0 || Shoes[i].GetPriceUSD()< min_usd)) {
//                index = i;
//                min_usd = Shoes[i].GetPriceUSD();
//            }
//        }
//        if(index >= 0){
//            cout << "\33[1:33mShoes #"<<index+1<<": \33[0m" << endl;
//            cout << Shoes[index].toStringSneakers() << endl;
//        } else cout << "\33[1:31mКроссовки не найдены.\33[0m" << endl;
//    }
////    void SaveInFile(std::ofstream &file){
////        for(int i = 0; i< Size_array; i++){
////            file << toString(i) << endl;
////        }
////    }
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
//class ArrayBoots {
//private:
//    int Size_array;
//    Boots* Shoes;// = new ShoesBase[Size_array];
//public:
//    ArrayBoots(int Size_array)
//            : Shoes(new Boots[Size_array])
//            , Size_array(Size_array)
//    {
////        cout<<"Вызвался конструктор ArrayShoes(1)"<<this;//endl;
//    }
//
//    ~ArrayBoots(){
//        delete[] this->Shoes;
////        cout<<"Вызвался деструктор ArrayShoes()"<<this;//endl;
//    }
//    Boots & operator [](const int index){
//        return Shoes[index];
//    }
//    void createArrayBoots(){
//        Shoes[0] = Boots(true, "Ingnite", 2990,ShoesBase::insole{37, 24}, ShoesBase::Brand::puma, true, Boots::Season::autumn);
//        Shoes[1]=  Boots(false, "Response", 2590,ShoesBase::insole{46, 22}, ShoesBase::Brand::adidas,true, Boots::Season::spring);
//        Shoes[2]=  Boots(true, "Wearajjday", 2730,ShoesBase::insole{40, 26}, ShoesBase::Brand::rebook, false, Boots::Season::winter);
//        Shoes[3]=  Boots(false, "Tanjun", 2690, ShoesBase::insole{41, 25}, ShoesBase::Brand::nike,true,Boots::Season::spring);
//        //ReadFromFile();
//
//    };
//
//    void show_arrayBoots(){
//        for(int i =0; i<Size_array; i++){
//            cout << "\33[1:33mShoes #" << i+1 << ":\33[0m\n";
//            cout << this->Shoes[i];
//        }
//    }
//
//    void add_objectBoots(Boots & new_element){
//        int a= -1;
//        for(int i=0; i <Size_array; i++){
//            if(this->Shoes[i].GetPriceUSD() == 0) {
//                a=i;
//                break;
//            }
//        }
//        if(a < 0){
//            Boots *Shoes_new = new Boots[Size_array+1];
//            for(int i=0; i< Size_array; i++){
//                Shoes_new[i]= Shoes[i];
//            }
//            Shoes= Shoes_new;
//            a = Size_array;
//            Size_array++;
//            delete[] Shoes_new;
//        }
//        Shoes[a] = new_element;
//        show_arrayBoots();
//    }
//    void test_insertBoots(Boots & new_element) {
//        int n = size_arrayBoots();
//        int a= Size_array;
//        auto *Test = new ShoesBase[1];
//        Test[0] = Boots(true, "Gaw", 3000,ShoesBase::insole{35, 20}, ShoesBase::Brand::puma, true, Boots::Season::spring);
//        if (n == a){
//            if(Test->GetIsOrtopedic() != new_element.GetIsOrtopedic()){
//                cout<<"\33[1:31mТест провален1.\33[0m" << endl;
//            }else if (Test->GetPriceUSD() != new_element.GetPriceUSD()){
//                cout<<("\33[1:31mТест провален2.\33[0m") << endl;
//            }else if (Test->GetModelName() != new_element.GetModelName()){
//                cout<<("\33[1:31mТест провален3.\33[0m") << endl;
//            }else if (Test->GetInsoleSize() != new_element.GetInsoleSize()){
//                cout<<("\33[1:31mТест провален4.\33[0m") << endl;
//            }else if (Test->GetInsoleLength() != new_element.GetInsoleLength()){
//                cout<<("\33[1:31mТест провален5.\33[0m") << endl;
//            } else cout<<("\33[1:32mТест пройден успешно.\33[0m") << endl;
//        }
//        else cout<<("\33[1:31mТест провален6.\33[0m") << endl;
//    }
//
//    Boots Get_objectBoots(int index){
//        if (index < Size_array && index >=Size_array)
//            return Shoes[index];
//    }
//    string toStringBoots(int index){
//        std::stringstream ss;
//        std::string a ;
//        std::string b ;
//        if (Shoes[index].GetBrand() == ShoesBase::Brand::nike)
//            a = "Nike";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::rebook)
//            a = "Rebook";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::adidas)
//            a = "Adidas";
//        else if (Shoes[index].GetBrand() == ShoesBase::Brand::puma)
//            a = "Puma";
//        else a = "No brand";
//        if (this->Shoes[index].GetSeason() == Boots::Season::spring)
//            b ="Spring";
//        else if (this->Shoes[index].GetSeason() == Boots::Season::winter)
//            b = "Wisual";
//        else if (this->Shoes[index].GetSeason() == Boots::Season::autumn)
//            b ="Autumn";
//        else b ="Undef";
//        ss<< "\tModel: " << Shoes[index].GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (Shoes[index].GetIsOrtopedic() ? "Yes" : "No") <<"\n\tUSD: " << std::to_string(Shoes[index].GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes[index].GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes[index].GetInsoleLength()) << "\n\tSeason: "<< b << "\n\tAnti-slip sole: "<< (Shoes[index].GetAntiSlipSole()?"Yes" : "No")<<"\n";
//        return ss.str();
//    }
//
//    void delete_elementBoots(int index){
//        if(index <0) index =0;
//        else if(index>=Size_array) index = Size_array-1;
//        Boots *Shoes_new = new Boots[Size_array-1];
//        for(int i =0; i <index; i++ ){
//            Shoes_new[i]= Shoes[i];
//        }
//        for(int i =index+1; i <Size_array; i++ ){
//            Shoes_new[i-1]= Shoes[i];
//        }
//        Shoes = Shoes_new;
//        Size_array--;
//        show_arrayBoots();
//    }
//    int size_arrayBoots (){
//        return Size_array;
//    }
//    void test_removeBoots() {
//        int n = size_arrayBoots();
//        int a= Size_array;
//        if (n == a) cout<<("\33[1:32mТест пройден успешно.\33[0m")<<endl;
//        else cout<<("\33[1:31mТест провален5.\33[0m")<<endl;
//    }
//    int size(){
//        int cout = 0;
//        for(int i =0; i < Size_array; i++) {
//            if ( Shoes[i].GetInsoleSize() >=39) {
//                cout++;
//            }
//        }
//        return cout;
//    }
//    void SizeMore39(){
//        for(int i =0; i < Size_array; i++) {
//            if ( Shoes[i].GetInsoleSize() >=39 ) {
//                //new_array[k] = Shoes[i];
//                cout << "\33[1:33mShoes #" << i+1 << ":\33[0m"<<endl;
//                cout<<Shoes[i].toStringBoots()<<endl;
//                cout<<"--------------------------------"<<endl;
//            }
//        }
//    }
////    void SaveInFile(std::ofstream &file){
////        for(int i = 0; i< Size_array; i++){
////            file << toString(i) << endl;
////        }
////    }
//};
//
//int main() {
//    cout << "\33[1:34mОбщий класс\33[0m" <<endl;
//    bool ortopedic = true;
//    std::string model_name = { "Gaw" };
//    int usd = 3000;
//    int size = 35;
//    int length = 20;
//    ArrayShoes* arr = new ArrayShoes(4);
//    ShoesBase* new_element = new ShoesBase(ortopedic, model_name, usd, ShoesBase::insole{size, length}, ShoesBase::Brand::nike);
//    std::ofstream outf("Create.txt");
//    std::ofstream outf2("Add.txt");
//    std::ofstream outf3("Delete.txt");
//    if (!outf.is_open() || !outf2.is_open() || !outf3.is_open()){
//        std::cerr << "Uh oh, Filet.txt could not be opened for writing!" << endl;
//        exit(1);
//    }
//    cout << "\33[1:35mСоздание массива.\33[0m" << endl;
//    arr->createArrayShoes();
//    arr->show_array();
//    arr->SaveInFile(outf);
//    cout << "\n\33[1:35mДобавление объекта.\33[0m" << endl;
//    arr->add_object(*new_element);
//    arr->test_insert(*new_element);
//    arr->SaveInFile(outf2);
//    int index =2;
//    cout << "\n\33[1:35mПоиск элемента по индексу: \33[0m" << index << endl;
//    cout << "\33[1:33mShoes #" << index+1 << ":\33[0m";
//    cout<<"\n"<< arr/*[index]<<endl;*/->Get_object(index).toString()<< endl;
//    cout << "\33[1:35mУдаление элемента по индексу: \33[0m" << index << endl;
//    arr->delete_element(index);
//    arr->test_remove();
//    arr->SaveInFile(outf3);
//    outf.close();
//    outf2.close();
//    outf3.close();
//    cout << "\n\33[1:35mПоиск ортопедической обуви брендов Найк и Пума.\33[0m" <<endl;
//    arr->OrtopedicNikePuma();
//
//    cout << "\33[1:34mКросовки\33[0m\n" <<endl;
//
//    ArraySneakers* arr1 = new ArraySneakers(4);
//    Sneakers* new_element1 = new Sneakers(ortopedic, model_name, usd, ShoesBase::insole{size, length}, ShoesBase::Brand::nike,true, Sneakers::Purpose::casual);
//    cout << "\33[1:35mСоздание массива.\33[0m" << endl;
//    arr1->createArraySneakers();
//    arr1->show_arraySneakers();
//    cout << "\n\33[1:35mДобавление объекта.\33[0m" << endl;
//    arr1->add_objectSneakers(*new_element1);
//    arr1->test_insertSneakers(*new_element1);
//    int index1 =2;
//    cout << "\n\33[1:35mПоиск элемента по индексу: \33[0m" << index1 << endl;
//    cout << "\33[1:33mShoes #" << index1+1 << ":\33[0m";
//    cout<<"\n"<< arr1/*[index1]<<endl;*/->Get_objectSneakers(index1).toStringSneakers()<< endl;
//    cout << "\33[1:35mУдаление элемента по индексу: \33[0m" << index1 << endl;
//    arr1->delete_elementSneakers(index1);
//    arr1->test_removeSneakers();
//    cout << "\n\33[1:35mПоиск самых дешёвых беговых кроссовок.\33[0m" <<endl;
//    arr1->CheapRunningShoes();
//
//    cout << "\33[1:34mБотинки\33[0m\n" <<endl;
//
//    ArrayBoots* arr2 = new ArrayBoots(4);
//    Boots* new_element2 = new Boots(ortopedic, model_name, usd, ShoesBase::insole{size, length}, ShoesBase::Brand::nike,true, Boots::Season::spring);
//    cout << "\33[1:35mСоздание массива.\33[0m" << endl;
//    arr2->createArrayBoots();
//    arr2->show_arrayBoots();
//    cout << "\n\33[1:35mДобавление объекта.\33[0m" << endl;
//    arr2->add_objectBoots(*new_element2);
//    arr2->test_insertBoots(*new_element2);
//    int index2 =2;
//    cout << "\n\33[1:35mПоиск элемента по индексу: \33[0m" << index2 << endl;
//    cout << "\33[1:33mShoes #" << index2+1 << ":\33[0m";
//    cout<<"\n"<< (*arr2)[index2]<<endl;//*/->Get_objectBoots(index2).toStringBoots()<< endl;
//    cout << "\33[1:35mУдаление элемента по индексу: \33[0m" << index2 << endl;
//    arr2->delete_elementBoots(index2);
//    arr2->test_removeBoots();
//    cout << "\n\33[1:35mПоиск ботинок больше 39-того размера.\33[0m" <<endl;
//    arr2->SizeMore39();
//}