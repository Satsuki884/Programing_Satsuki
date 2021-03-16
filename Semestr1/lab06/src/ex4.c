#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define SIZE 15

int main() {

    char sentence[SIZE] = { " One  hundred " };
    int word_count = 0;
    char space = ' ';
    bool flag = false;
    for (int i = 0; i < SIZE; i++) {
        if (sentence[i] != space && sentence[i]!= '\0') {
            flag = true;
            while (i <= SIZE && sentence[i + 1] != space)
                i++;
        }

        if (flag) {
            word_count++;
            flag = false;
        }
    }
    return 0;
}