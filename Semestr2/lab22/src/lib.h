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
#include <regex.h>
#pragma warning (disable: 4996)
//#define log_info(L, ...) printf( "\033[22;34m[INFO]\033[0m /usr/bin/ld: %s:\033[22;34m%d\033[0m " L  "\n", __FILE__, __LINE__, ##__VA_ARGS__)  // blue
//#define log_info(L, ...) printf( "\33[0:31m[INFO]\33[0m /usr/bin/ld: %s:%d " L  "\n", __FILE__, __LINE__, ##__VA_ARGS__) // red
#define log_info(L, ...) printf( "\33[1:33m[INFO]\33[0m /usr/bin/ld: %s:%d " L  "\n", __FILE__, __LINE__, ##__VA_ARGS__) //yellow
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
struct shoes* list_new_node(bool a, char b[], int c, char d[], int e, int f);
void list_add_end(struct List* ls, bool a, char b[], int c, char d[], int e, int f);
void list_add_begin(struct List* ls, bool a, char b[], int c, char d[], int e, int f);
void list_insert(struct List* ls, int index, bool a, char b[], int c, char d[], int e, int f);
int list_remove(struct List* ls, int index);
int compare_size(struct shoes* a, struct shoes* b);
int compare_length(struct shoes* a, struct shoes* b);
int compare_usd(struct shoes* a, struct shoes* b);
void sort(struct List* ls, int(*compare)(struct shoes*, struct shoes*));

void test_add_end(struct List *ls,  bool a, char b[], int c, char d[], int e, int f);
void test_add_begin(struct List *ls, bool a, char b[], int c, char d[], int e, int f);
void test_insert(struct List *ls,int index, bool a, char b[], int c, char d[], int e, int f);
int count_list(struct List *ls);
void test_remove(struct List *ls, int a);
void test_sort_usd(struct List *ls);
void test_sort_size(struct List *ls);
void test_sort_length(struct List *ls);


int Read_From_File(struct List* ls);
void Save_In_File(struct List *ls);
void list_show(struct List* ls, int reverse);
int reg_func(char * string1);
int reg(char * string);




#endif //LAB21_MAIN_H
