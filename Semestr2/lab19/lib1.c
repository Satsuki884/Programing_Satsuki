#include "lib1.h"

//void list_add_begin(struct List *ls, bool a, char b, int c, char d, int e, int f)
//{
//    struct shoes *node = list_new_node(a, b, c, d, e, f);
//
//    node->next = ls->head;
//    if (ls->head)
//        ls->head->prev = node;
//    else
//        ls->tail = node;
//    ls->head = node;
//}
//void list_insert(struct List *ls, int index, bool a, char b, int c, char d, int e, int f)
//{
//    if (index <= 0) {
//        list_add_begin(ls, a, b, c, d, e, f);
//        return;
//    }
//
//    struct shoes *p = ls->head;
//    while (index > 0) {
//        if (!p) {
//            list_add_end(ls, a, b, c, d, e, f);
//            return;
//        }
//        p = p->next;
//        index--;
//    }
//    struct shoes *node = list_new_node(a, b, c, d, e, f);
//    node->prev = p->prev;
//    node->next = p;
//    node->prev->next = node;
//    node->next->prev = node;
//}
//int list_remove(struct List *ls, int index)
//{
//    if (index < 0)
//        return 0;
//    struct shoes *p = ls->head;
//    if (index == 0) {
//        if (!ls->head)
//            return 0;
//        ls->head = ls->head->next;
//        if (p->next)
//            p->next->prev = NULL;
//        else
//            ls->tail = NULL;
//        free(p);
//        return 1;
//    }
//    while (index > 0) {
//        if (!p)
//            return 0;
//        p = p->next;
//        index--;
//    }
//    p->prev->next = p->next;
//    if (p->next)
//        p->next->prev = p->prev;
//    else
//        ls->tail = p->prev;
//    free(p);
//    return 1;
//}
//void print_array (struct shoes *array, int a){
//    for(int i =0; i<a; i++){
//        if(array[i].ortopedic == 1) printf("Ortopedic: True\n");
//        else printf("Ortopedic: False\n");
//        printf("Model: ");
//        printf("%s\t", array[i].model_name);
//        printf("\nUSD: %d\t\n", array[i].usd);
//        printf("Brand: ");
//        printf("%s\t", array[i].brand_model);
//        printf("\nSize: %d\t\nLenght: %d\t\n", array[i].size_shoes.size, array[i].size_shoes.length);
//        printf("---------------------------\n" );
//    }
//}