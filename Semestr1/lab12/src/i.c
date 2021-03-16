#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_number(int value);

int main() {
    char str[] = "Hello ";
    int a = 1<<31;

    char buf[10];

    fgets(buf, 9, stdin);
    long int value = strtol(buf, NULL, 10);

    print_number(value);

    //fwrite(&str, sizeof(char), strlen(str) + 1, stdout);
    fwrite(&buf, sizeof(char), strlen(buf) + 1, stdout);
    //fwrite(&a, sizeof(a), 1, stdout);

    return 0;
}

void print_number(int value){
    char buf[13];
    gcvt(value, 10, buf);
    //sprintf(buf, "%d ", value);

    //fwrite(&buf, sizeof(char), strlen(buf) + 1, stdout);
    puts(buf);
}