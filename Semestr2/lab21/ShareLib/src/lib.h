//
// Created by maestro on 17.04.2021.
//

#ifndef LAB21_MAIN_H
#define LAB21_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>
#include <errno.h>
#include <syslog.h>
#pragma warning (disable: 4996)
//#define log_info(L, ...) printf( "\033[22;34m[INFO]\033[0m /usr/bin/ld: %s:\033[22;34m%d\033[0m " L  "\n", __FILE__, __LINE__, ##__VA_ARGS__)  // blue
//#define log_info(L, ...) printf( "\33[0:31m[INFO]\33[0m /usr/bin/ld: %s:%d " L  "\n", __FILE__, __LINE__, ##__VA_ARGS__) // red
struct size {
    int size;
    int length;
};
struct shoes {
    int ortopedic;
    char model_name[30];
    int usd;
    char brand_model[10];
    struct size size_shoes;
    struct shoes* next;
    struct shoes* prev;
};
struct List {
    struct shoes* head;
    struct shoes* tail;
};

void Read_From_File(struct List* ls);
void Save_In_File(struct List *ls);
void list_show(struct List* ls, int reverse);




#endif //LAB21_MAIN_H
