#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void test_insert(char *array){
    char *s = "abTEXT2racadabra";
    if(strcmp(array, s) != 0){
        printf("Тест провален. Ожидаемое значение %s не равно %s\n", array, s);
    } else{
        printf("Тест пройден успешно\n");
    }
}
void test_reduce(char *array){
    char *s = "abcadabra";
    if(strcmp(array, s) != 0){
        printf("Тест провален. Ожидаемое значение %s не равно %s\n", array, s);
    } else{
        printf("Тест пройден успешно\n");
    }
}

void insert(char array1[], char array2[], int pos){
    int N = (int)strlen(array1);
    int M = (int)strlen(array2);
    char * arr= malloc((M+N) * sizeof(char));
    memcpy(arr, array1, pos*sizeof(char));
    memcpy((arr + pos), array2, M*sizeof(char) );
    memcpy((arr + pos +M), array1+pos, (N-pos)*sizeof(char) );
    printf("%s\n", arr);
    test_insert(arr);

}

void reduce(char *array, int pos1, int pos2){
    int N = (int)strlen(array);
    char * arr = malloc((N-pos2+pos1) * sizeof(char));
    memcpy(arr, array, pos1*sizeof(char));
    memcpy((arr + pos1), array + pos2+1, (N-pos2)*sizeof(char) );
    printf("%s\n", arr);
    test_reduce(arr);
}



int main(){
    char * s1 = {"abracadabra"};
    int N = (int)strlen(s1);
    char* s2 = {"TEXT2"};
    char a;
    printf("Введите 'a' для вставки одного рядка в другой, и 'b' для удаления из рядка всех символов в заданном диапазоне :\n");
    scanf("%c", &a);
    int pos, pos1, pos2;
    switch (a){
        case 'a':
            pos = 2;
            if(pos < 0){
                pos = 0;
            } else if(pos >= N){
                pos = N;
            }
            insert(s1,s2, pos);
            break;
        case 'b':
            pos1 = 2;
            printf("Позиция один: %d\n", pos1);
            pos2 = 3;
            printf("Позиция два: %d\n", pos2);
            reduce(s1, pos1, pos2);
            break;
        default:
            printf( "Неправильный ввод.\n" );
    }
}


