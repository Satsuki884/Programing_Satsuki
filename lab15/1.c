/*#include <stdio.h>
#include <string.h>
#define STR "abracadabra"
#define N 26
struct Freq{
    char element;
    int amount;
};
struct Freq create(char value){
    struct Freq myFreq;
    myFreq.element = value;
    myFreq.amount = 0;
    return myFreq;
}
int main(){
    FILE *file;

    file = fopen("fscanf.txt", "w");

    printf( "abracadabra\n");
    struct Freq array[N] = {
            create('a'),
            create('b'),
            create('c'),
            create('d'),
            create('e'),
            create('f'),
            create('g'),
            create('h'),
            create('i'),
            create('j'),
            create('k'),
            create('l'),
            create('m'),
            create('n'),
            create('o'),
            create('p'),
            create('q'),
            create('r'),
            create('s'),
            create('t'),
            create('u'),
            create('v'),
            create('w'),
            create('x'),
            create('y'),
            create('z'),
    };

    const int text_size = strlen(STR);
    for(int i =0; i < text_size; i++){
        char current_element = STR[i];
        for(int j = 0; j < N; j++){
            if(array[j].element == current_element){
                array[j].amount++;;
                break;
            }
        }
    }
    for(int i =0; i<N; i++){
        if (array[i].amount != 0)
        printf("%c\t %d\t\n", array[i].element, array[i].amount);
    }
    struct Freq arr[10];
    for(int j = 0; j <= 5; j++ ){
        for(int i =0; i <=N; i++){
            if(array[i].amount != 0){
                arr[j].element = array[i].element;
                arr[j].amount = array[i].amount;
                j++;
            }

        }
    }
    int m =0;
    for(int i =0; i<N;i++){
        if(array[i].amount != 0){
            m++;
        }
    }

    char ar[10];
    int aa[10];
    for (int j =0; j < 10; j++){
        for(int i=0; i < 10; i++){
            ar[j] = arr[i].element;
            j++;
            aa[j++] = arr[i].amount;
        }
    }
    char bb[11];
    sprintf(bb,"%d %d %d %d %d ",aa[1], aa[3], aa[5], aa[7], aa[9]);
    for (int j =0; j < 10; j++){
        for(int i=0; i < 10; i++){
            j++;
            ar[j++] = bb[i];
            i++;
            //j++;
        }
    }
   fwrite(&ar, sizeof(char), 10, file);
    fclose(file);
}
*/