#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <stdbool.h>
#include <time.h>
#include <errno.h>
#include <syslog.h>
#include <regex.h>
#include <fstream>
#pragma warning (disable: 4996)
#define log_info(L, ...) printf( "\33[1:33m[INFO]\33[0m /usr/bin/ld: %s:%d " L  "\n", FILE, LINE, ##__VA_ARGS__) //yellow
//using namespace std;
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
    insole m_insole_size;
    Brand m_brand;
public:
    ShoesBase()
            : m_is_ortopedic(false)
            , m_price_usd(0)
            , m_brand(Brand::no_brand)
    {}

    ShoesBase(const ShoesBase& other)
            : m_is_ortopedic(other.m_is_ortopedic)
            , m_model_name(other.m_model_name)
            , m_price_usd(other.m_price_usd)
            , m_insole_size(other.m_insole_size)
            , m_brand(other.m_brand)
    {}
    ShoesBase(bool is_ortopedic, const std::string& model_name, int price_usd, const insole& insole_size, Brand brand)
            : m_is_ortopedic(is_ortopedic)
            , m_model_name(model_name)
            , m_price_usd(price_usd)
            , m_insole_size(insole_size)
            , m_brand(brand)
    {}

    bool GetIsOrtopedic() const
    {
        return m_is_ortopedic;
    }

    const std::string& GetModelName() const
    {
        return m_model_name;
    }

    int GetPriceUSD() const
    {
        return m_price_usd;
    }

    const insole& GetInsoleSize() const
    {
        return m_insole_size;
    }

    Brand GetBrand() const
    {
        return m_brand;
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
int SIZE =4;
    ShoesBase *array = new ShoesBase[SIZE];
    bool ortopedic = 1;
    char model_name[30] = { "Gaw" };
    int usd = 3000;
    char brand_model[10] = { "Nike" };
//    ShoesBase::insole* arr[]={
//            ShoesBase::insole(35,20);
//    };

    int size = 35;
    int length = 20;
    ShoesBase(ortopedic, model_name, usd, ShoesBase::insole{size, length},brand_model);
    char a;
    printf("Введіть\n'c'  для добавления елемента по индексу,\n'd' для удаления эелемента по индексу,\n");
    scanf(" %c", &a);
    int k =0;
    switch (a) {
        case 'c':
            break;
        case 'd':
            break;
        default:
            printf("Неправильный ввод.\n");
    }
}