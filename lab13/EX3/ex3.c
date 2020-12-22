#include <stdio.h>
#define STR "abracadabra"
#define N 26 

struct Freq{
    char element;
    int frequency;
};

struct Freq create(char value){
        struct Freq myFreq;
        myFreq.element = value;
        myFreq.frequency = 0;
        return myFreq;
}

int main(){
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
                array[j].frequency++;;
                break;
            }
        }
    }
    for(int i =0; i<N; i++){
        printf("%c\t %d\t %.2f\n", array[i].element, array[i].frequency, (array[i].frequency/((float)text_size)));
    }

}
