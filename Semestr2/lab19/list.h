//#ifndef LAB19_LIST_H
//#define LAB19_LIST_H
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//
//struct size{
//    int size;
//    int length;
//};
//
//struct shoes{
//    bool ortopedic;
//    char model_name[30];
//    int usd;
//    char brand_model[10];
//    struct size size_shoes;
//    struct shoes *next;
//    struct shoes *prev;
//};
//struct List {
//    struct shoes *head;
//    struct shoes *tail;
//};
//
//struct shoes *list_new_node(bool a, char b[], int c, char d[], int e, int f)
//{
//    struct shoes *node = malloc(sizeof(struct shoes));
//    node->ortopedic = a;
//    for(int i =0; i<30;i++) {
//        node->model_name[i] = b[i];
//    }
//    node->usd = c;
//    for(int i =0; i<10;i++) {
//        node->brand_model[i] = d[i];
//    }
//    node->size_shoes.size = e;
//    node->size_shoes.length = f;
//    node->next = NULL;
//    node->prev = NULL;
//    return node;
//}
//
//struct List *list_new()
//{
//    struct List *ls = malloc(sizeof(struct List));
//    ls->head = NULL;
//    ls->tail = NULL;
//    return ls;
//}
//
//void list_add_end(struct List *ls, bool a, char b[], int c, char d[], int e, int f);
//
//void list_add_begin(struct List *ls, bool a, char b[], int c, char d[], int e, int f);
//
//void list_insert(struct List *ls, int index, bool a, char b[], int c, char d[], int e, int f);
//
//int list_remove(struct List *ls, int index);
//
//void list_show(struct List *ls, int reverse);
//
//int compare_size(struct shoes* a, struct shoes* b);
//
//int compare_length(struct shoes* a, struct shoes* b);
//
//int compare_usd(struct shoes* a, struct shoes* b);
//
//void sort(struct List *ls, int(*compare)(struct shoes*, struct shoes*));
//
//#endif //LAB19_DATA_H