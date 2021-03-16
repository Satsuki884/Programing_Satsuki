/*#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define max_length_in_file 128
int Count_words(char str[]);

int main() {
    FILE *file_in;
    char *file_name = (char*)malloc(sizeof(char) * 20);
    printf("Введите файл из которого будет считатся список фамилий в виде файл.расширение: ");
    scanf("%s", file_name);
    file_in = fopen(file_name, "r");
    char str[max_length_in_file];
    fgets(str, max_length_in_file, file_in);
    fclose(file_in);
    str[strcspn(str, "\n")] = 0;

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

    FILE *file_out;
    char* file_name2= (char*)malloc(sizeof(char) * 20);
    printf("Введите файл куда будет считываться исправленный список фамилий в виде файл.расширение: ");
    scanf("%s", file_name2);
    file_out = fopen(file_name2, "w");
    for (int c = 0; c < count_words; c++) {
        printf( "%s", *(words+c));
        fprintf(file_out, "%s", *(words+c));
        if(c < count_words-1) {
            printf(", ");
            fprintf(file_out, ", ");
        }
    }
    fclose(file_out);
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
}*/