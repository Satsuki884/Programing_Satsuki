#include "lib.h"
#define N 10 
/*int Count_words(char str[]); 
char** Sort(char** words, int size);*/


int main() {
    int SIZE = 50;
    char str[] = "ghfj awsjjs qwiw ac ab a";
    char el[] = " ";
    int count_words = Count_words(str);
    char** words = (char**)malloc(sizeof(char*) * count_words);
    char* temp = strtok(  str, el );
    int i = 0;
    while (temp != NULL){
        *(words+i) = temp;
        i++;
        temp = strtok(NULL, el);
    }
    words = Sort(words, count_words);
    return 0;
}

int Count_words(char str[]){
    char* start = &str[0];
    bool flag = true;
    bool space = true;
    int count_word = 0;
    while (flag){
        start++;
        if (*start == ' ' || *start == '.' || *start == ',' || *start == '!' || *start == '?' || *start == ',' || *start == '\0'){
            space = true;
            while (space){
                if (!(*start == ' ' || *start == '.' || *start == ',' || *start == '!' || *start == '?' || *start == ',') || *start == '\0')
                    space = false;
                else
                    start++;
            }
            count_word++;
        }
        if (*start == '\0')
            flag = false;
    }
    return count_word;
}
 
 
char** Sort(char** words, int size){
    char* temp = (char*)malloc(sizeof(char));
    for (int i = 1; i < size; i++)
        for (int j = 0; j < size - i; j++)
            if (strcmp(words[j], words[j + 1]) > 0) {
                temp = *(words + j);
                *(words+j)= *(words +j + 1);
                *(words+j + 1) = temp;
            }
    return words;
}