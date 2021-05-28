#include "Container.h"
//#include "Backpack.h"


int main() {

    Sneakers sneakers(false, "Ingnite", 2990, Brand::puma, Insole{37, 24},
                      Purpose::sport, true);
    Sneakers sneakers2(false, "Response", 2590, Brand::adidas, Insole{ 46, 22 },
                       Purpose::casual, true);
    Sneakers sneakers3(true, "Wearajjday", 2730, Brand::rebook, Insole{ 40, 26 },
                       Purpose::sport, false);


    Boots boots (true, "Ingnite", 2990, Brand::puma, Insole{37, 24},
                 Season::autumn, true);
    Boots boots2 (false, "Response", 2590, Brand::adidas, Insole{46, 22},
                  Season::spring, true);
    Boots boots3(true, "Wearajjday", 2730, Brand::rebook, Insole{40, 26},
                 Season::winter, false);

    List list;
    list.addShoes(&sneakers);
    list.addShoes(&sneakers2);
    list.addShoes(&sneakers3);
    list.addShoes(&boots);
    list.addShoes(&boots2);
    list.addShoes(&boots3);

    //Исходный список

    list.ShowAll();
    cout << endl;
    list.Method1();
    cout << endl;
    list.Method2();
    cout << endl;
    list.Method3();
    cout << endl;


    return 0;
}