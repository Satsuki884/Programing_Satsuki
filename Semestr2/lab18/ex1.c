#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void insert(char array1[], char array2[], int pos){
    int N = (int)strlen(array1);
    int M = (int)strlen(array2);
    char * arr= malloc((M+N) * sizeof(char));
    memcpy(arr, array1, pos*sizeof(char));
    memcpy((arr + pos), array2, M*sizeof(char) );
    memcpy((arr + pos +M), array1+pos, (N-pos)*sizeof(char) );
    printf("%s\n", arr);

}

void reduce(char *array, int pos1, int pos2){
    int N = (int)strlen(array);
    char * arr = malloc((N-pos2+pos1) * sizeof(char));
    memcpy(arr, array, pos1*sizeof(char));
    memcpy((arr + pos1), array + pos2+1, (N-pos2)*sizeof(char) );
    printf("%s", arr);

}

int main(){
    char * s1 = {"abracadabra"};
    int N = (int)strlen(s1);
    char* s2 = {"TEXT2"};
    char a;
    printf("Введите 'a' для вставки одного рядка в другой, и 'b' для удаления из рядка всех символов в заданном диапазоне :\n");
    scanf("%c", &a);
    int pos, pos1, pos2;
    char *p= malloc(2 * sizeof(char));
    char *p1= malloc(2 * sizeof(char));
    char *p2= malloc(2 * sizeof(char));
    switch (a){
        case 'a':
            printf("Введите позицию. Цифра от 0 до %d: ", N);
            scanf("%s", p);
            pos = (int) strtol(p, NULL, 10);
            if(pos < 0){
                pos = 0;
            } else if(pos >= N){
                pos = N;
            }
            insert(s1,s2, pos);
            break;
        case 'b':
            printf("Введите две цифры, позиции откуда и до куда будут удаляться символы строки.\nЦифры должны быть от 0 до %d.\nПозиция один должна быть меньше или равна позиции два.\n", N);
            printf("Позиция один: ");
            scanf("%s", p1);
            pos1 = (int) strtol(p1, NULL, 10);
            printf("Позиция два: ");
            scanf("%s", p2);
            pos2 = (int) strtol(p2, NULL, 10);
            reduce(s1, pos1, pos2);
            break;
        default:
            printf( "Неправильный ввод.\n" );
    }
}

/*void reduse(struct Container * container, size_t pos) {
    if (container->size == 0) return; // nothing to delete
    struct TestElement* new_array = malloc((container->size - 1) *
                                           sizeof(struct TestElement));
    if (pos >= container->size) pos = container->size - 1;
    memcpy(new_array, container->array, pos * sizeof(struct TestElement));
    memcpy(new_array + pos, container->array + pos + 1, (container->size -
                                                         pos - 1) * sizeof(struct TestElement));
    free(container->array);
    container->array = new_array;
    container->size--;
}
*/

