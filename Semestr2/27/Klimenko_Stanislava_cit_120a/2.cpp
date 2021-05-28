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

class Circle{
protected:
    int x;
    int y;
    int z;
public:
    Circle()
    : x(0)
    , y(0)
    , z(0)
    {}

    Circle(const Circle& other)
    : x(other.x)
    , y(other.y)
    , z(other.z)
    {}

    Circle(int m_x, int m_y, int m_z)
    : x(m_x)
    , y(m_y)
    , z(m_z)
    {}

    int Get_x() const{
        return x;
    }
    int Get_y() const{
        return y;
    }
    int Get_z() const{
        return z;
    }

};

class ArrayCircle{
private:
    int Size_array;
    Circle* CircleArray;
public:
    ArrayCircle(int Size_array)
            : CircleArray(new Circle[Size_array])
            , Size_array(Size_array)
    {}

    void createArray(){
        srand(time(0));
        int x_new = 0;
        int y_new = 0;
        int z_new = 0;
        for(int i =0; i < Size_array; i++){
            x_new = rand()%50;
            y_new = rand()%50;
            z_new = rand()%50;
            CircleArray[i] = Circle(x_new, y_new, z_new);
        }
    }
    double search_sqrt(double n){
        const double eps=0.01;
        double sqrt=0;
        while(sqrt*sqrt <n){
            sqrt+=eps;
        };
        sqrt=sqrt;
        return sqrt;
    }
    void min_distance(int point_x, int point_y, int point_z){
        double i = 0;
        double a = 0;
        double d = 0;
        int b = 0;
        int distance = 0;
        double new_array[Size_array];
        for(int c =0; c < Size_array; c++) {
            i = (CircleArray[c].Get_x() + point_x);
            i = i * i;
            a = (CircleArray[c].Get_y() + point_y);
            a = a * a;
            d = (CircleArray[c].Get_z() + point_z);
            d= d*d;
            b = i + a+d;
            distance = search_sqrt(b); // нахождение расстояния к центру координат
            new_array[c] = distance;
        }
        double min = new_array[0];
        int index;
        for(int g = 1; g < Size_array; g++){
            if(min > new_array[g]) {
                min = new_array[g];
                index = g;
            }
        }
        cout<<"Наиближайшая к точке сфера: Cфера №"<<index<<" Координаты: ("<<CircleArray->Get_x()<<"; "<<CircleArray->Get_y()<<"; "<<CircleArray->Get_z()<<")"<<endl;
    }

    void count_circle_next_to_centre(){
        double i = 0;
        double a = 0;
        double d = 0;
        int b = 0;
        int distance = 0;
        double new_array[Size_array];
        for(int c =0; c < Size_array; c++) {
            i = (CircleArray[c].Get_x());
            i = i * i;
            a = (CircleArray[c].Get_y());
            a = a * a;
            d = (CircleArray[c].Get_z());
            d= d*d;
            b = i + a+d;
            distance = search_sqrt(b); // нахождение расстояния к центру координат
            new_array[c] = distance;
        }
        int count =0;
        int distance_from_centre = 50;
        for(int m =0;m <Size_array; m++ ){
            if(new_array[m] <= distance_from_centre) count++;
        }
        cout<<"Колличество сфер расстояние от центра координат которых меньше "<<distance_from_centre<<": "<<count<<endl;
    }
    void two_circle(){
        double i = 0;
        double a = 0;
        double d = 0;
        int b = 0;
        int distance = 0;
        double new_array[Size_array];
        for(int c =0; c < Size_array; c++) {
            i = (CircleArray[c].Get_x() + CircleArray[c+1].Get_x());
            i = i * i;
            a = (CircleArray[c].Get_y() + CircleArray[c+1].Get_y());
            a = a * a;
            d = (CircleArray[c].Get_z() + CircleArray[c+1].Get_z());
            d= d*d;
            b = i + a+d;
            distance = search_sqrt(b); // нахождение расстояния к центру координат
            new_array[c] = distance;
        }
        double min = new_array[0];
        int index;
        for(int g = 1; g < Size_array; g++){
            if(min > new_array[g]) {
                min = new_array[g];
                index = g;
            }
        }
        cout<<"Две сферы что находятся наиболее близко к друг другу : Cфера №"<<index<<" Координаты: ("<<CircleArray[index].Get_x()<<"; "<<CircleArray[index].Get_y()<<"; "<<CircleArray[index].Get_z()<<") и Сфера №"<<index+1<<" Координаты: ("<<CircleArray[index+1].Get_x()<<"; "<<CircleArray[index+1].Get_y()<<"; "<<CircleArray[index+1].Get_z()<<")"<<endl;
    }
};

int main(){
    srand(time(0));
    ArrayCircle* array = new ArrayCircle(100);
    array->createArray();
    array->min_distance(5, 6, 7);
    array->count_circle_next_to_centre();
    array->two_circle();
}