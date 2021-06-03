//
// Created by maestro on 03.06.2021.
//

#include "Container.hpp"


int main() {

    Sneakers sneakers(true, "Ingnite1", 2990, Brand::puma, Insole{37, 24},
                      Purpose::sport, true);
    Sneakers sneakers2(false, "Response", 2590, Brand::adidas, Insole{ 46, 22 },
                       Purpose::casual, true);


    Boots boots (false, "Ingnite2", 2300, Brand::puma, Insole{37, 24},
                 Season::autumn, true);
    Boots boots2 (false, "Response", 2390, Brand::adidas, Insole{46, 22},
                  Season::spring, true);

    {

        List<unique_ptr<Shoes>> list;

        unique_ptr<Shoes> uniquePtr(new Sneakers(sneakers));
        unique_ptr<Shoes> uniquePtr1(new Sneakers(sneakers2));
        unique_ptr<Shoes> uniquePtr3(new Boots(boots));
        unique_ptr<Shoes> uniquePtr4(new Boots(boots2));
        {
            unique_ptr<Shoes> uniquePtr6(std::move(uniquePtr)); // После выполнения uniquePtr ни на что не указывает
            cout << "Demo: " << endl;
            uniquePtr6.get()->Print();
            cout << endl << endl;
            uniquePtr = std::move(uniquePtr6);  // После выполнения uniquePtr возврщается прежнее значение, а uniquePtr6
            // больше ни на что не указывает
        }

        list.addItem(&uniquePtr);
        list.addItem(&uniquePtr1);
        list.addItem(&uniquePtr3);
        list.addItem(&uniquePtr4);



        //Исходный список
        cout << "|----------------------------------------------------------unique_ptr LIST----------------------------------------------------------|" << endl;
        cout << endl;
        for (auto &shoes : list) {
            shoes->get()->Print();  // используем метод get() для конвертации std::unique_ptr в обычный указатель
            cout << endl;
        }
        cout << "|-----------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << endl;

    }

    {
        List<shared_ptr<Shoes>> list;

        shared_ptr<Shoes> sharedPtr (new Sneakers(sneakers));
        shared_ptr<Shoes> sharedPtr1  (new Sneakers(sneakers2));
        shared_ptr<Shoes> sharedPtr3  (new Boots(boots));
        shared_ptr<Shoes> sharedPtr4  (new Boots(boots2));
        shared_ptr<Shoes> sharedPtr6  (sharedPtr);   // sharedPtr6 указывает на тот же объект, что и sharedPtr
        // и в таком случае объект будет уичтожен только тогда,
        // когда оба этих указателей выйдут за облость видимости функции


        list.addItem(&sharedPtr);
        list.addItem(&sharedPtr1);
        list.addItem(&sharedPtr3);
        list.addItem(&sharedPtr4);
        list.addItem(&sharedPtr6);



        //Исходный список
        cout << "|----------------------------------------------------------shared_ptr LIST----------------------------------------------------------|" << endl;

        cout << endl;
        for (auto &backpack : list) {
            backpack->get()->Print();  // используем метод get() для конвертации std::shared_ptr в обычный указатель
            cout << endl;
        }
        cout << "|-----------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << endl;

    }

    {
        List<weak_ptr<Shoes>> list;

        shared_ptr<Shoes> sharedPtr (new Sneakers(sneakers));
        shared_ptr<Shoes> sharedPtr1  (new Sneakers(sneakers2));
        shared_ptr<Shoes> sharedPtr3  (new Boots(boots));
        shared_ptr<Shoes> sharedPtr4  (new Boots(boots2));

        // weak_ptr используется, когда нужен умный указатель, который имеет доступ к ресурсу, но не считается его владельцем.
        weak_ptr<Shoes> weakPtr = sharedPtr;
        weak_ptr<Shoes> weakPtr1 = sharedPtr1;
        weak_ptr<Shoes> weakPtr3 = sharedPtr3;
        weak_ptr<Shoes> weakPtr4 = sharedPtr4;
        weak_ptr<Shoes> weakPtr6 = weakPtr;


        list.addItem(&weakPtr);
        list.addItem(&weakPtr1);
        list.addItem(&weakPtr3);
        list.addItem(&weakPtr4);
        list.addItem(&weakPtr6);



        //Исходный список
        cout << "|----------------------------------------------------------weak_ptr LIST----------------------------------------------------------|" << endl;

        cout << endl;
        for (auto &shoes : list) {
            shoes->lock()->Print();  //используем метод lock() для конвертации std::weak_ptr в std::shared_ptr
            cout << endl;
        }
        cout << "|-----------------------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << endl;

    }

    return 0;
}