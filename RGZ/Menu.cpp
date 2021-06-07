/**
 * @file menu.cpp
 * @brief File that performs methods of menu class
 *
 * @author Klymenko S.
 * @date 29-may-2021
 * @version 1.0
 */
#include "Menu.h"

void Menu::User_menu() {
    controller.ReadFromFileSneakers();
    controller.ReadFromFileBoots();
    Sneakers sneakers4(true, "Ruru", 5990, Brand::nike, Insole{39, 26},
                       Purpose::casual, true);
    Boots boots(true, "Ruru", 5990, Brand::nike, Insole{39, 26},
                       winter, true);
    for (int i = 0; i < 244; ++i)
    {
        int marker;
        cout << endl << "Выберите:" << endl;
        cout << "1. Показати список; \n"
                "2. Видалити усе; \n"
                "3. Видалили один елемент; \n"
                "4. Отримання елемента за індексом; \n"
                "5. Додавання елемента; \n"
                "6. Чоботи з розміром більше 39; \n"
                "7. Найдешевші бігові кросівки; \n"
                "8. Ортопедичне взуття брендів найк і пума. \n"
                "9. Сортування.\n"
                "10. Запис у файл.\n"
                "11. Пошук за критеріями.\n"
                "12. Вихід з програми"<< endl;
        cin >> marker;
        cout << endl;
        cout << endl;
        int criterion = -1;
        int index;
        int checker_add;

        switch (marker)
        {
            case 1: {
                cout << "\33[1:34mВи маєте масив:\33[0m" << endl;
                print1();
                controller.getlist()->ShowAll();
                cout << "|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
                cout << endl;
                break;
            }
            case 2: {
                cout << "\33[1:34mВи видаляете всі елементи\33[0m" << endl;
                controller.getlist()->DeleteAll();
                cout << "\33[1:34mСписок: пустий.\33[0m" << endl;
                print1();
                controller.getlist()->ShowAll();
                cout << "|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
                cout << endl;
                break;
            }
            case 3: {
                cout << "\33[1:34mВведіть індекс елемента, який хочете видалити\33[0m" << endl;
                int pos;
                cin >> pos;
                controller.getlist()->DeleteElement(pos);
                cout << "\33[1:34mЕлемент успішно видалений\33[0m" << endl;
                cout << endl;
                break;
            }
            case 4: {
                cout << "\33[1:34mВведіть індекс елемента ,котрий хочете отримати\33[0m" << endl;
                cin >> index;
                vector<Shoes *>::iterator iter = controller.getlist()->getShoes().begin();
                iter += index;
                print1();
                (*iter)->Print();
                cout << endl;
                cout << "|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
                break;
            }
            case 5: {
                cout << "\33[1:34mДодавання елемента\33[0m" << endl;
                cout << "Це кросівки чи чоботи: 0 - кросівки, 1 - чоботи " << endl;
                int checker;
                cin >> checker;
                if (checker == 0) {
                    print1();
                    sneakers4.Print();
                    cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
//                    cout << "\nВи бажаете додати к кінець, чи по індексу: 0 - eкінець, 1 - по індексу: " << endl;
//                    cin >> checker_add;
//                    if (checker_add == 0) {
                        cout << "\nYour list: " << endl;
                        controller.getlist()->addShoes(&sneakers4);
                        print1();
                        controller.getlist()->ShowAll();
                        cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
//                    } else if (checker_add == 1) {
//                        auto iter = controller.getlist()->getShoes().begin();
//                        int iter_pos;
//                        cout << "Індекс після якого ви бажаєте вставити взуття: " << endl;
//                        cin >> iter_pos;
//                        auto temp = controller.getlist()->getShoes();
//                        temp.insert(iter + iter_pos, sneakers4.clone());
//                        controller.getlist()->setShoes(temp);
//                        cout << "Your list: " << endl;
//                        print1();
//                        controller.getlist()->ShowAll();
//                        cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
//                    } else {
//                        cout << endl;
//                        cout << endl;
//                        cout << "Error, wrong definition" << endl;
//                        return;
//                    }
                } else if (checker == 1) {
                    print1();
                    boots.Print();
//                    cout << "\nВи бажаете додати к кінець, чи по індексу: 0 - eкінець, 1 - по індексу: " << endl;
//                    int checker_add;
//                    cin >> checker_add;
//                    if (checker_add == 0) {
                    cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
                        cout << "\nYour list: " << endl;
                        controller.getlist()->addShoes(&boots);
                        print1();
                        controller.getlist()->ShowAll();
                        cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
//                    } else if (checker_add == 1) {
//                        auto iter = controller.getlist()->getShoes().begin();
//                        int iter_pos;
//                        cout << "Індекс після якого ви бажаєте вставити взуття: " << endl;
//                        cin >> iter_pos;
//                        auto temp = controller.getlist()->getShoes();
//                        temp.insert(iter + iter_pos, boots.clone());
//                        controller.getlist()->setShoes(temp);
//                        cout << "Your list: " << endl;
//                        print1();
//                        controller.getlist()->ShowAll();
//                        cout << "\n|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
//                    } else {
//                        cout << endl;
//                        cout << endl;
//                        cout << "Error, wrong definition" << endl;
//                        return;
//                    }
                }else {
                    cout << "Error, wrong option" << endl;
                    return;
                }

                break;
            }
            case 6:{
                cout << "\33[1:34mЧоботи з розміром більше 39\33[0m";
                cout << endl;
                print1();
                controller.More39();
                cout << "|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
                cout << endl;
                break;
            }
            case 7:{
                controller.SortByPrice(true);
                cout << "\33[1:34mНайдешевші бігові кросівки\33[0m";
                cout << endl;
                print1();
                controller.CheapRunningShoes();
                cout << "|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
                cout << endl;
                break;
            }
            case 8:{
                cout << "\33[1:34mОртопедичне взуття брендів найк і пума\33[0m";
                cout << endl;
                print1();
                controller.NikePuma();
                cout << "|-------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
                cout << endl;
                break;
            }
            case 9:{
                cout << "\33[1:34mСортування за вказаними критеріями\33[0m";
                cout << endl << "Виберіть один критерій:" << endl;
                cout << "1. Розмір чобота; \n"
                        "2. Довжина устілки; \n"
                        "3. Ціна; \n";
                cout << endl << " > Your choice: ";
                cin >> criterion;
                controller.Sort(criterion);
                break;

            }
            case 10:{
                controller.SaveInFile();
                break;
            }
            case 11:{
                cout << "\33[1:34mпошук елементів за вказаними критеріями\33[0m\n"<<endl;
                cout << endl << "Виберіть три критерія:" << endl;
                cout << "1. Розмір чобота; \n"
                        "2. Довжина устілки; \n"
                        "3. Ортопедичність; \n"
                        "4. Ціна; \n"
                        "5. Бренд; "<< endl;
                cout << endl << " > Your choice: ";
                int one, two, three;
                cin >> one;
                cin >> two;
                cin >> three;
                controller.SearchByCriteria(one, two, three);
            }
            case 12:{
                return;
            }
            default:
                printf("ERROR: Wrong option!\n");
                printf("\n\n");
                break;
        }
    }
}

