#ifndef INC_21_LIBLIST_H
#define INC_21_LIBLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>
#include <errno.h>
#include <syslog.h>
#define log_info(L, ...) printf( "\33[0:31m[INFO]\33[0m /usr/bin/ld: %s:%d " L  "\n", __FILE__, __LINE__, ##__VA_ARGS__) // red
struct size {
    int size;
    int length;
};
/**
 * Структура «Взуття»
 */
struct shoes {
    int ortopedic;
    char model_name[30];
    int usd;
    char brand_model[10];
    struct size size_shoes;
    struct shoes* next;
    struct shoes* prev;
};
/**
 * Двоспрямований список
 */
struct List {
    struct shoes* head;
    struct shoes* tail;
};
struct shoes* list_new_node(bool a, char b[], int c, char d[], int e, int f);
void list_add_end(struct List* ls, bool a, char b[], int c, char d[], int e, int f);
void list_add_begin(struct List* ls, bool a, char b[], int c, char d[], int e, int f);
void list_insert(struct List* ls, int index, bool a, char b[], int c, char d[], int e, int f);
int list_remove(struct List* ls, int index);
int compare_size(struct shoes* a, struct shoes* b) ;
int compare_length(struct shoes* a, struct shoes* b) ;
int compare_usd(struct shoes* a, struct shoes* b) ;
void sort(struct List* ls, int(*compare)(struct shoes*, struct shoes*));
void test_add_end(struct List *ls,  bool a, char b[], int c, char d[], int e, int f);
void test_add_begin(struct List *ls, bool a, char b[], int c, char d[], int e, int f);
void test_insert(struct List *ls,int index, bool a, char b[], int c, char d[], int e, int f);
int count_list(struct List *ls);
void test_remove(struct List *ls, int a);
void test_sort_usd(struct List *ls);
void test_sort_size(struct List *ls);
void test_sort_length(struct List *ls);
void list_show(struct List* ls, int reverse);
void Read_From_File(struct List* ls);
void Save_In_File(struct List *ls);
#endif //INC_21_LIBLIST_H
