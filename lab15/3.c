/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR_FILE_OPEN -3

void main() {
    const char filename[] = "C:/c/words.bin";
    const char termWord[] = "exit";
    char buffer[128];
    unsigned int len;
    FILE *wordsFile = NULL;

    printf("Opening file...\n");

    wordsFile = fopen(filename, "w+b");
    if (wordsFile == NULL) {
        printf("Error opening file");
        fgetc();
        exit(ERROR_FILE_OPEN);
    }

    printf("Enter words\n");
    do {
        scanf("%127s", buffer);
        if (strcmp(buffer, termWord) == 0) {
            len = 0;
            fwrite(&len, sizeof(unsigned), 1, wordsFile);
            break;
        }
        len = strlen(buffer);
        fwrite(&len, sizeof(unsigned), 1, wordsFile);
        fwrite(buffer, 1, len, wordsFile);
    } while(1);

    printf("rewind and read words\n");
    rewind(wordsFile);
    fgetc();

    do {
        fread(&len, sizeof(int), 1, wordsFile);
        if (len == 0) {
            break;
        }
        fread(buffer, 1, len, wordsFile);
        buffer[len] = '\0';
        printf("%s\n", buffer);
    } while(1);
    fclose(wordsFile);
    fgetc();
}*/