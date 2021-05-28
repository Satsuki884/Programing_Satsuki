#include "list.hpp"



int main() {

    Sneakers sneakers(false, "Ingnite", 2990, Brand::puma, Insole{37, 24},
                      sport, true);
    Sneakers sneakers2(false, "Response", 2590, Brand::adidas, Insole{ 46, 22 },
                       casual, true);
    Sneakers sneakers3(true, "Wearajjday", 2730, Brand::rebook, Insole{ 40, 26 },
                       sport, false);


    List<Sneakers> list;
    list.addElement(&sneakers);
    list.addElement(&sneakers2);
    list.addElement(&sneakers3);

    list.ShowList2();

    List<int> listint;

    int a1 = 110;
    int a2 = 50;
    int a3 = 90;

    listint.addElement(&a1);
    listint.addElement(&a2);
    listint.addElement(&a3);
int index = 1;
    int result = listint.getElement(index);
    cout << "Получить елемент по индексу: " << index<<" "<<result << endl << endl;

    listint.SortList();

    int min = listint.FindMinElement();
    cout << "Минимальный елемент в массиве: " <<min << endl << endl;
    cout << "Отсортированный массив" <<endl;
    listint.ShowList();
    cout << endl;

    List<char> listchar;

    char sym1 = 's';
    char sym2 = 't';
    char sym3 = 'a';
    char sym4 = 's';
    char sym5 = 'y';
    char sym6 = 'a';

    listchar.addElement(&sym1);
    listchar.addElement(&sym2);
    listchar.addElement(&sym3);
    listchar.addElement(&sym4);
    listchar.addElement(&sym5);
    listchar.addElement(&sym6);

    listchar.deleteElement(2);
    cout<< "Удаление елемента по индексу"<<endl;
    listchar.ShowList();
    cout << endl;

    List<string> liststring;
    string word1 = "Hi!";
    string word2 = "How are you?";
    string word3 = "What are you doing?";

    liststring.addElement(&word1);
    liststring.addElement(&word2);
    liststring.addElement(&word3);

//    int resindex = liststring.FindIndexElement(word2);
//    cout << resindex << endl << endl;


    liststring.ShowList();
    cout << endl;

    liststring.deleteElement(1);
    liststring.ShowList();
    cout << endl;

    return 0;



}