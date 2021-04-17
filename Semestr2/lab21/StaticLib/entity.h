#ifndef LAB21_ENTITY_H
#define LAB21_ENTITY_H

#include "StaticLib/lib.h"
#define log_info(L, ...) printf( "\33[1:33m[INFO]\33[0m /usr/bin/ld: %s:%d " L  "\n", __FILE__, __LINE__, ##__VA_ARGS__) //yellow

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

#endif //LAB21_ENTITY_H
