#include "lib.h"
#define STR "aabracadabra"
#define N 26 
#define arr "abcdefghijklmnopqrstuvwxyz"

int main(){
    char * mas = malloc(strlen(STR)*sizeof(char));
    strcpy(mas, STR);
    char * buf = malloc(strlen(arr)*sizeof(char));
    strcpy(buf, arr);
    char * result = malloc((strlen(arr)*2)*sizeof(char));
    for (int i = 0, j = 0; i < (strlen(buf)); i++, j++){
        *(result +j++) = *(buf +i);
    }
    float* frequency = malloc(sizeof(char)*N);
    float* quantity = malloc(sizeof(char)*26);
    for (int i = 0; i < 26; i++) 
    {
        *(quantity+i) = 0;
        for (int j = 0; j < N; j++)
            if (*(buf+i) == *(mas+j)) {
                quantity[i]++; 
            }
        *(frequency+i) =  (*(quantity+i) / ((strlen(STR)-1))*100);
    }

    for (int i = 0, j = 1; i < (strlen(buf)); i++, j++){
        *(result +j++) = *(frequency +i);
    }
    return 0;
}

