/*#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h> 
#define str "0ab2 jw23 iiej3u dhje7 77kd u8d"

int main() {
    const int SIZE = 32;
    bool flag = true;
    int count_numb = 0;
    char check_numb = 0;
    int count_check_numb;
    for (int i = 0; i < SIZE; i++) {
        if (!((int)*(str + i) >= 97 && (int)*(str + i) <= 122) && (int)*(str + i) != (int)' ' && *(str+i) != '\0')
            count_numb++;
    }
    char* numb_arr = (char*)malloc(sizeof(char) * count_numb);
    for (int i = 0, j = 0; i < SIZE; i++) {
        if (!((int)*(str + i) >= 97 && (int)*(str + i) <= 122) && (int)*(str + i) != (int)' ' && *(str+i) != '\0')
        {
            *(numb_arr + j) = *(str + i);
            j++;
        }
    }
    
        for (int i = 0; i < count_numb; ++i) {
       
                printf("%c = ", *(numb_arr + i));
         
        }
            return 0;
}*/