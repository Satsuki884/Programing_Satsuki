#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iostream>

//#pragma warning (disable: 4996)
using std::string;
using std::cin;
using std::cout;
using std::endl;
class ShoesBase
{
public:
    struct insole
    {
        int size = 0;
        int length = 0;
    };
    enum class Brand
    {
        no_brand,
        adidas,
        puma,
        rebook,
        nike,
    };
private:
    bool m_is_ortopedic;
    std::string m_model_name;
    int m_price_usd;
    Brand m_brand;
    insole m_insole_size;
public:
    ShoesBase()
            : m_is_ortopedic(false)
            , m_price_usd(0)
            , m_brand(Brand::no_brand)
    {
//        cout<<"Вызвался конструктор ShoesBase()"<<this;//endl;
    }
    ShoesBase(const ShoesBase& other)
            : m_is_ortopedic(other.m_is_ortopedic)
            , m_model_name(other.m_model_name)
            , m_price_usd(other.m_price_usd)
            , m_brand(other.m_brand)
            , m_insole_size(other.m_insole_size)
    {
//        cout<<"Вызвался конструктор ShoesBase(1)"<<this;//endl;
    }
    ShoesBase & operator = (const ShoesBase& other)
    {
//        cout<<"Вызвался оператор присваивания "<<this;//endl;
        if(this->m_price_usd!=0){
            this->m_price_usd=0;
            this->m_is_ortopedic=0;
            this->m_insole_size.length=0;
            this->m_insole_size.size=0;
        }
        this->m_price_usd = other.m_price_usd;
        this->m_insole_size = other.m_insole_size;
        this->m_is_ortopedic = other.m_is_ortopedic;
        this->m_brand = other.GetBrand();
        this->m_model_name = other.m_model_name;
        return *this;
    }

    bool operator == (const ShoesBase& other){
        bool result =true;
        if(this->m_price_usd != other.m_price_usd){
            result = false;
        } else if(this->m_insole_size.size != other.m_insole_size.size){
            result = false;
        }else if(this->m_insole_size.length != other.m_insole_size.length){
            result = false;
        }else if(this->m_is_ortopedic != other.m_is_ortopedic){
            result = false;
        }else if(this->m_brand != other.GetBrand()){
            result = false;
        }else if(this->m_model_name == other.m_model_name){
            result = false;
        }
        return result;
    }

    friend std::ostream & operator << (std::ostream& os, const ShoesBase& Shoes){
        std::string a ;
        if (Shoes.GetBrand() == ShoesBase::Brand::nike)
            a = "Nike";
        else if (Shoes.GetBrand() == ShoesBase::Brand::rebook)
            a = "Rebook";
        else if (Shoes.GetBrand() == ShoesBase::Brand::adidas)
            a = "Adidas";
        else if (Shoes.GetBrand() == ShoesBase::Brand::puma)
            a = "Puma";
        else a = "No brand";
        os<<"\tModel: " << Shoes.GetModelName() << endl<<"\tBrand: " << a << "\n\tOrtopedic: " << (Shoes.GetIsOrtopedic() ? "true" : "false") <<"\n\tUSD: " << std::to_string(Shoes.GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes.GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes.GetInsoleLength()) << "\n-----------------------------------\n";
        return os;
    }
    friend std::istream & operator >> (std::istream& is, ShoesBase& Shoes){
        std::string brand_name;
        ShoesBase::Brand brand;
        std::string ortopedic;
        std::string model_name;
        std::string usd;
        std::string size;
        std::string length;
        is >> model_name >> brand_name >>  ortopedic >> usd  >>size >> length;
        if (brand_name =="Nike")
            Shoes.m_brand = ShoesBase::Brand::nike;
        else if (brand_name =="Rebook")
            Shoes.m_brand = ShoesBase::Brand::rebook;
        else if (brand_name =="Adidas")
            Shoes.m_brand = ShoesBase::Brand::adidas;
        else if (brand_name =="Puma")
            Shoes.m_brand = ShoesBase::Brand::puma;
        else Shoes.m_brand = ShoesBase::Brand::no_brand;
        Shoes.m_price_usd =std::stoi(usd);
        Shoes.m_insole_size.size =std::stoi(size);
        Shoes.m_insole_size.length =std::stoi(length);
        Shoes.m_model_name = model_name;
        Shoes.m_is_ortopedic = ortopedic == "Yes";
        return is;
    }
    ShoesBase(bool is_ortopedic, const std::string& model_name, int price_usd, const insole& insole_size, Brand brand)
            : m_is_ortopedic(is_ortopedic)
            , m_model_name(model_name)
            , m_price_usd(price_usd)
            , m_brand(brand)
            , m_insole_size(insole_size)
    {
//    cout<<"Вызвался конструктор ShoesBase(5) "<<this;//endl;
    }
    ~ShoesBase()
    {
//        cout<<"Вызвался деструктор ShoesBase()"<<this;//endl;
    }

    bool GetIsOrtopedic() const{
        return m_is_ortopedic;
    }

    const std::string& GetModelName() const{
        return m_model_name;
    }

    int GetPriceUSD() const{
        return m_price_usd;
    }

    int GetInsoleLength() const{
        return m_insole_size.length;
    }
    int GetInsoleSize() const{
        return m_insole_size.size;
    }

    Brand GetBrand() const{
        return m_brand;
    }
    string toString(){
        std::stringstream ss;
        std::string a ;
        if (this->GetBrand() == ShoesBase::Brand::nike)
            a = "Nike";
        else if (this->GetBrand() == ShoesBase::Brand::rebook)
            a = "Rebook";
        else if (this->GetBrand() == ShoesBase::Brand::adidas)
            a = "Adidas";
        else if (this->GetBrand() == ShoesBase::Brand::puma)
            a = "Puma";
        else a = "No brand";
        ss<< "\tModel: " << this->GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (this->GetIsOrtopedic() ? "true" : "false") <<"\n\tUSD: " << std::to_string(this->GetPriceUSD()) << "\n\tSize: " << std::to_string(this->GetInsoleSize()) << "\n\tLength: " << std::to_string(this->GetInsoleLength());
        return ss.str();
    }

};

class ArrayShoes{
private:
    int Size_array;
    ShoesBase* Shoes;// = new ShoesBase[Size_array];
public:
    ArrayShoes(int Size_array)
            : Shoes(new ShoesBase[Size_array])
            , Size_array(Size_array)
    {
//        cout<<"Вызвался конструктор ArrayShoes(1)"<<this;//endl;
    }
    ShoesBase & operator [](const int index){
        return Shoes[index];
    }

    ~ArrayShoes(){
        delete[] this->Shoes;
//        cout<<"Вызвался деструктор ArrayShoes()"<<this;//endl;
    }
    void ReadFromFile() {
        std::ifstream file("Saerch.txt");
        std::string line;
        std::stringstream ss;
        int i =0;
        std::string ortopedic;
        std::string model_name;
        std::string brand_name;
        ShoesBase::Brand brand;
        std::string usd;
        std::string size;
        std::string length;
        if (file.is_open()) {
            printf("\nFile opened for reading!!!\n\n");
            while (getline(file, line)) {
                if(!line.empty()){
                    cout<<"Записываем строку в Shoes["<<i<<"]"<<endl;
                    ss<<line;
                    getline(ss, model_name, ' ');
                    getline(ss, brand_name, ' ');
                    if (brand_name =="Nike")
                        brand = ShoesBase::Brand::nike;
                    else if (brand_name =="Rebook")
                        brand = ShoesBase::Brand::rebook;
                    else if (brand_name =="Adidas")
                        brand = ShoesBase::Brand::adidas;
                    else if (brand_name =="Puma")
                        brand = ShoesBase::Brand::puma;
                    else brand = ShoesBase::Brand::no_brand;
                    getline(ss, ortopedic, ' ');
                    getline(ss, usd, ' ');
                    getline(ss, size, ' ');
                    getline(ss, length, ' ');
                    ss.clear();
                    Shoes[i] = ShoesBase(ortopedic=="Yes", model_name, std::stoi(usd), ShoesBase::insole{std::stoi(size), std::stoi(length)}, brand);
                }
                i++;
            }
        }
        file.close();
    }
    void createArrayShoes(){
//        Shoes[0] = ShoesBase(true, "Ingnite", 2990,ShoesBase::insole{37, 24}, ShoesBase::Brand::puma);
//        Shoes[1]=  ShoesBase(false, "Response", 2590,ShoesBase::insole{46, 22}, ShoesBase::Brand::adidas);
//        Shoes[2]=  ShoesBase(true, "Wearajjday", 2730,ShoesBase::insole{40, 26}, ShoesBase::Brand::rebook);
//        Shoes[3]=  ShoesBase(false, "Tanjun", 2690, ShoesBase::insole{31, 25}, ShoesBase::Brand::nike);
        ReadFromFile();
        show_array();
    };

    void show_array(){
        for(int i =0; i<Size_array; i++){
            cout << "\33[1:33mShoes #" << i+1 << ":\33[0m\n";
            cout << this->Shoes[i];
        }
    }

    void add_object(ShoesBase & new_element){
        int a= -1;
        for(int i=0; i <Size_array; i++){
            if(this->Shoes[i].GetPriceUSD() == 0) {
                a=i;
                break;
            }
        }
        if(a < 0){
            ShoesBase *Shoes_new = new ShoesBase[Size_array+1];
            for(int i=0; i< Size_array; i++){
                Shoes_new[i]= Shoes[i];
            }
            Shoes= Shoes_new;
            a = Size_array;
            Size_array++;
            delete[] Shoes_new;
        }
        Shoes[a] = new_element;
        show_array();
    }
    void test_insert(ShoesBase & new_element) {
        int n = size_array();
        int a= Size_array;
        auto *Test = new ShoesBase[1];
        Test[0] = ShoesBase(true, "Gaw", 3000,ShoesBase::insole{35, 20}, ShoesBase::Brand::puma);
        if (n == a){
            if(Test->GetIsOrtopedic() != new_element.GetIsOrtopedic()){
                cout<<"\33[1:31mТест провален1.\33[0m" << endl;
            }else if (Test->GetPriceUSD() != new_element.GetPriceUSD()){
                cout<<("\33[1:31mТест провален2.\33[0m") << endl;
            }else if (Test->GetModelName() != new_element.GetModelName()){
                cout<<("\33[1:31mТест провален3.\33[0m") << endl;
            }else if (Test->GetInsoleSize() != new_element.GetInsoleSize()){
                cout<<("\33[1:31mТест провален4.\33[0m") << endl;
            }else if (Test->GetInsoleLength() != new_element.GetInsoleLength()){
                cout<<("\33[1:31mТест провален5.\33[0m") << endl;
            } else cout<<("\33[1:32mТест пройден успешно.\33[0m") << endl;
        }
        else cout<<("\33[1:31mТест провален6.\33[0m") << endl;
    }

    ShoesBase Get_object(int index){
        return Shoes[index];
    }
    string toString(int index){
        std::stringstream ss;
        std::string a ;
        if (Shoes[index].GetBrand() == ShoesBase::Brand::nike)
            a = "Nike";
        else if (Shoes[index].GetBrand() == ShoesBase::Brand::rebook)
            a = "Rebook";
        else if (Shoes[index].GetBrand() == ShoesBase::Brand::adidas)
            a = "Adidas";
        else if (Shoes[index].GetBrand() == ShoesBase::Brand::puma)
            a = "Puma";
        else a = "No brand";
        ss<< "\tModel: " << Shoes[index].GetModelName() << "\n\tBrand: " << a << "\n\tOrtopedic: " << (Shoes[index].GetIsOrtopedic() ? "true" : "false") <<"\n\tUSD: " << std::to_string(Shoes[index].GetPriceUSD()) << "\n\tSize: " << std::to_string(Shoes[index].GetInsoleSize()) << "\n\tLength: " << std::to_string(Shoes[index].GetInsoleLength()) ;
        return ss.str();
    }

    void delete_element(int index){
        if(index <0) index =0;
        else if(index>=Size_array) index = Size_array-1;
        ShoesBase *Shoes_new = new ShoesBase[Size_array-1];
        for(int i =0; i <index; i++ ){
            Shoes_new[i]= Shoes[i];
        }
        for(int i =index+1; i <Size_array; i++ ){
            Shoes_new[i-1]= Shoes[i];
        }
        Shoes = Shoes_new;
        Size_array--;
        show_array();
    }
    int size_array (){
        return Size_array;
    }
    void test_remove() {
        int n = size_array();
        int a= Size_array;
        if (n == a) cout<<("\33[1:32mТест пройден успешно.\33[0m")<<endl;
        else cout<<("\33[1:31mТест провален5.\33[0m")<<endl;
    }

    void SaveInFile(std::ofstream &file){
        for(int i = 0; i< Size_array; i++){
            file << toString(i) << endl;
        }
    }
    int size(){
        int cout = 0;
        for(int i =0; i < Size_array; i++) {
            if ( (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::nike)) || (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::puma)) ) {
                cout++;
            }
        }
        return cout;
    }
    ShoesBase OrtopedicNikePuma(){
        ShoesBase * new_array = new ShoesBase[size()];
//        int i =0;
        int k =0;
        for(int i =0; i < Size_array; i++) {
            if ( (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::nike)) || (Shoes[i].GetIsOrtopedic() && (Shoes[i].GetBrand() == ShoesBase::Brand::puma)) ) {
                new_array[k] = Shoes[i];
                cout << "\33[1:33mShoes #" << i+1 << ":\33[0m";
                cout<<Get_object(i).toString()<<endl;
                cout << "\n---------------------------------------\n\n";
                k++;
            }
        }
        delete [] Shoes;
        Shoes = new_array;
        return *Shoes;
    }
};

int main() {
    bool ortopedic = true;
    std::string model_name = { "Gaw" };
    int usd = 3000;
    int size = 35;
    int length = 20;
    ArrayShoes* arr = new ArrayShoes(4);
    ShoesBase* new_element = new ShoesBase(ortopedic, model_name, usd, ShoesBase::insole{size, length}, ShoesBase::Brand::nike);
    std::ofstream outf("Create.txt");
    std::ofstream outf2("Add.txt");
    std::ofstream outf3("Delete.txt");
    if (!outf.is_open() || !outf2.is_open() || !outf3.is_open()){
        std::cerr << "Uh oh, Filet.txt could not be opened for writing!" << endl;
        exit(1);
    }
    cout << "\33[1:33mСоздание массива.\33[0m" << endl;
    arr->createArrayShoes();
    arr->show_array();
    arr->SaveInFile(outf);
    cout << "\33[1:33mДобавление объекта.\33[0m" << endl;
    arr->add_object(*new_element);
    arr->test_insert(*new_element);
    arr->SaveInFile(outf2);
    int index =2;
    cout << "\33[1:33mПоиск элемента по индексу: \33[0m" << index << endl;
    cout << "\33[1:33mShoes #" << index+1 << ":\33[0m";
    cout<<"\n"<< (*arr)[index];//->Get_object(index).toString()<< endl;
    cout << "\33[1:33mУдаление элемента по индексу: \33[0m" << index << endl;
    arr->delete_element(index);
    arr->test_remove();
    arr->SaveInFile(outf3);
    outf.close();
    outf2.close();
    outf3.close();
    cout << "\33[1:33mПоиск ортопедической обуви брендов Найк и Пума.\33[0m" <<endl;
    arr->OrtopedicNikePuma();

}