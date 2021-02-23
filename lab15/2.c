#include <stdio.h>
struct person{
    char name;
    int age;
};
struct person create(char name){
    struct person myFreq;
    myFreq.name = name;
    myFreq.age = 0;
    return myFreq;
}
int main(){
    struct person arr[10] = {
            {'A', 13},
            {'T', 23},
            {'R', 33},
            {'M', 45},
            {'E', 10},
            {'D', 26},
            {'L', 39},
            {'S', 56},
            {'B', 30},
            {'P', 9},
    };
    for(int i =0; i<10; i++){
            printf("%c\t %d\t\n", arr[i].name, arr[i].age);
    }
    int m=0;
    for(int i = 0; i< 10; i++){
        if((arr[i].age >=20) && (arr[i].age <= 35)){
            m++;
        }
    }
    printf("%d\n\n", m);
    struct person array[m];
    for(int i = 0; i <= m; i++ ){
        for(int j =0; j <=10; j++){
            if((arr[j].age >=20) && (arr[j].age <= 35)){
                array[i].name = arr[j].name;
                array[i].age = arr[j].age;
                i++;
            }
        }
    }
    for(int i =0; i<m; i++){
        printf("%c\t %d\t\n", array[i].name, array[i].age);
    }
    return 0;
}