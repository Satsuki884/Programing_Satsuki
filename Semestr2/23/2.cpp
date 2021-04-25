#include <string>
#include <iostream>
#pragma warning (disable: 4996)
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
    { /*cout<<"Вызвался конструктор "<<this<<endl;*/}
    ShoesBase(const ShoesBase& other)
            : m_is_ortopedic(other.m_is_ortopedic)
            , m_model_name(other.m_model_name)
            , m_price_usd(other.m_price_usd)
            , m_brand(other.m_brand)
            , m_insole_size(other.m_insole_size)
    {/*cout<<"Вызвался конструктор "<<this<<endl;*/}
    ShoesBase(bool is_ortopedic, const std::string& model_name, int price_usd, const insole& insole_size, Brand brand)
            : m_is_ortopedic(is_ortopedic)
            , m_model_name(model_name)
            , m_price_usd(price_usd)
            , m_brand(brand)
            , m_insole_size(insole_size)
    {/*cout<<"Вызвался конструктор "<<this<<endl;*/}
    ~ShoesBase()
    { /*cout<<"Вызвался деструктор "<<this<<endl;*/}


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

};

class ArrayShoes{
private:
    int Size_array;
    ShoesBase* Shoes;// = new ShoesBase[Size_array];
public:
    ArrayShoes(int Size_array)
            : Shoes(new ShoesBase[Size_array])
            , Size_array(Size_array)
    {}

    void createArrayShoes(){
        Shoes[0] = ShoesBase(true, "Ingnite", 2990,ShoesBase::insole{37, 24}, ShoesBase::Brand::puma);
        Shoes[1]=  ShoesBase(false, "Response", 2590,ShoesBase::insole{46, 22}, ShoesBase::Brand::adidas);
        Shoes[2]=  ShoesBase(true, "Wearajjday", 2730,ShoesBase::insole{40, 26}, ShoesBase::Brand::rebook);
        Shoes[3]=  ShoesBase(false, "Tanjun", 2690, ShoesBase::insole{31, 25}, ShoesBase::Brand::nike);

    };

    void show_array(){
        for(int i =0; i<Size_array; i++){
            //\33[1:33m[INFO]\33[0m
            cout << "\33[1:33mShoes #" << i+1 << ":\33[0m";
            cout<< "\n\tModel name: "<<this->Shoes[i].GetModelName()<<endl;
            cout<< "\tBrand name: ";
            if (this->Shoes[i].GetBrand() == ShoesBase::Brand::nike)
                cout << "Nike"<<endl;
            else if (this->Shoes[i].GetBrand() == ShoesBase::Brand::rebook)
                cout << "Rebook"<<endl;
            else if (this->Shoes[i].GetBrand() == ShoesBase::Brand::adidas)
                cout << "Adidas"<<endl;
            else if (this->Shoes[i].GetBrand() == ShoesBase::Brand::puma)
                cout << "Puma"<<endl;
            else cout << "No brand"<<endl;
            cout<< "\tOrtopedic: "<<(this->Shoes[i].GetIsOrtopedic() ? "Yes" : "No" )<<endl;
            cout<< "\tUSD: "<<this->Shoes[i].GetPriceUSD()<<endl;
            cout<< "\tSize: "<<this->Shoes[i].GetInsoleSize()<<endl;
            cout<< "\tLength: "<<this->Shoes[i].GetInsoleLength()<<endl;
            cout<< "\n-----------------------------------\n\n";
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
            Shoes = Shoes_new;
            a = Size_array;
            Size_array++;
        }
        Shoes[a] = new_element;
        show_array();
    }
    ShoesBase Get_object(int index){
        return Shoes[index];
    }
    void test_insert(ShoesBase & new_element) {
        int n = size_array();
        int a= Size_array;
        auto *Test = new ShoesBase[1];
        Test[0] = ShoesBase(true, "Gaw", 3000,ShoesBase::insole{35, 20}, ShoesBase::Brand::puma);
        if (n == a){
            if(Test->GetIsOrtopedic() != new_element.GetIsOrtopedic()){
                cout<<"Тест провален1.\n"<<endl;
            }else if (Test->GetPriceUSD() != new_element.GetPriceUSD()){
                cout<<("Тест провален3.\n")<<endl;
            }else if (Test->GetModelName() != new_element.GetModelName()){
                cout<<("Тест провален4.\n")<<endl;
            }else if (Test->GetInsoleSize() != new_element.GetInsoleSize()){
                cout<<("Тест провален5.\n")<<endl;
            }else if (Test->GetInsoleLength() != new_element.GetInsoleLength()){
                cout<<("Тест провален6.\n")<<endl;
            } else cout<<("Тест пройден успешно.\n")<<endl;
        }
        else cout<<("Тест провален7.\n")<<endl;
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
    int size_array(){
        return Size_array;
    }
    void test_remove() {
        int n = size_array();
        int a= Size_array;
        if (n == a) cout<<("Тест пройден успешно.\n")<<endl;
        else cout<<("Тест провален5.\n")<<endl;
    }
};


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
//
//    bool GetIsRunning() const
//    {
//        return m_is_running;
//    }
//
//    Purpose GetPurpose() const
//    {
//        return m_purpose;
//    }
//};

int main() {
    bool ortopedic = true;
    std::string model_name = { "Gaw" };
    int usd = 3000;
    int size = 35;
    int length = 20;
    ArrayShoes* arr = new ArrayShoes(4);
    ShoesBase* new_element = new ShoesBase(ortopedic, model_name, usd, ShoesBase::insole{size, length}, ShoesBase::Brand::nike);
    arr->createArrayShoes();
    arr->add_object(*new_element);
    arr->test_insert(*new_element);
    int index =2;
    cout << "\33[1:33mПоиск элемента по индексу: \33[0m" << index <<endl;
    cout << "\33[1:33mShoes #" << index+1 << ":\33[0m";
    cout<< "\n\tModel name: "<<arr->Get_object(index).GetModelName()<<endl;
    cout<< "\tBrand name: ";
    if (arr->Get_object(index).GetBrand() == ShoesBase::Brand::nike)
        cout << "Nike"<<endl;
    else if (arr->Get_object(index).GetBrand() == ShoesBase::Brand::rebook)
        cout << "Rebook"<<endl;
    else if (arr->Get_object(index).GetBrand() == ShoesBase::Brand::adidas)
        cout << "Adidas"<<endl;
    else if (arr->Get_object(index).GetBrand() == ShoesBase::Brand::puma)
        cout << "Puma"<<endl;
    else cout << "No brand"<<endl;
    cout<< "\tOrtopedic: "<<(arr->Get_object(index).GetIsOrtopedic() ? "Yes" : "No" )<<endl;
    cout<< "\tUSD: "<<arr->Get_object(index).GetPriceUSD()<<endl;
    cout<< "\tSize: "<<arr->Get_object(index).GetInsoleSize()<<endl;
    cout<< "\tLength: "<<arr->Get_object(index).GetInsoleLength()<<"\n"<<endl;
    cout << "\33[1:33mУдаление элемента по индексу: \33[0m" << index <<endl;
    arr->delete_element(index);
    arr->test_remove();
}