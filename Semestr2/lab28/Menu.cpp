
#include "Menu.h"
#include "Exersise.h"

int Menu(){
    int action;

    cout << endl << "Выберите:" << endl;
    cout << "1. Определите сумму двух массивов; \n "
            "2. Умножить два массива; \n"
            "3. Вычислить среднее значение элементов массива; \n"
            "4. Найдите в массиве элемент с максимальным значением; \n"
            "5. Найдите в массиве элемент с минимальным значением; \n"
            "6. Определите количество положительных элементов в массиве; \n"
            "7. Определите количество элементов, которые принадлежат диапазону [a, b]; \n"
            "8. Определите количество отрицательных элементов в массиве; \n"
            "9. Найти в массиве номер первого элемента с максимальным значением; \n"
            "10. Найдите количество элементов с максимальным значением в массиве». "<< endl;
    cout << endl << " > Your choice: ";
    cin >> action;
    if(action > 10 || action < 1){
        throw out_of_range("Out of range exception");
    } else{
        return action;
    }
}

void Exersise::CallingSelectedFunction(int number){
    int i1, i2;
    switch (number) {
        case 1:
            cout << " > Enter Input Indexes of Arrays: ";
            cin >> i1 >> i2;
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func(A + B)" << endl;
            result = SumArrays(i1, i2);
            break;
        case 2:
            cout << " > Enter Input Indexes of Arrays: ";
            cin >> i1 >> i2;
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func(A * B)" << endl;
            result = MultiplyArrays(i1, i2);
            break;
        case 3:
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func calc average" << endl;
            result = CalcAverage();
            break;
        case 4:
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func find max elem" << endl;
            result = FindMaxElem();
            break;
        case 5:
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func find min elem" << endl;
            result = FindMinElem();
            break;
        case 6:
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func find positive elem" << endl;
            result = FindPositiveNumber();
            break;
        case 7:
            cout << " > Enter range: ";
            cin >> i1 >> i2;
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func find N element in range" << endl;
            result = SearchInRange(i1, i2);
            break;
        case 8:
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func find negative elem" << endl;
            result = FindNegativeNumber();
            break;
        case 9:
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func find pos max elem" << endl;
            result = FindMaxElemPos();
            break;
        case 10:
            if (result != nullptr){
                delete[] result;
            }
            cout << " > Calling func find N max elem" << endl;
            result = FindNMaxElem();
            break;
        default:
            break;
    }
}