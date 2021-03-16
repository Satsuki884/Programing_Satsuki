#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define N 10 
int Count_words(char str[]); 

int main() {
    char str[] = "Ivanov,Sidorov,Ivanov,Ivanchenko,Sidorov,Mihalchuk";
    char el[] = ",";
    int count_words = Count_words(str);
    char** words = (char**)malloc(sizeof(char*) * count_words);
    char* temp = strtok(  str, el );
    int i = 0;
    while (temp != NULL){
        *(words+i) = temp;
        i++;
        temp = strtok(NULL, el);
    }
    for (int i = 0; i < count_words; ++i) {
        for (int j = i + 1; j < count_words; ++j) {
            if (!strcmp(words[j], words[i])) {
                words[j] = words[--count_words];
                --j;

            }
        }
    }
    for (int i = 0; i < count_words; ++i) {
            printf("%s ", *(words+i));
    }
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
