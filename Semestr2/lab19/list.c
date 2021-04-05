//#include "list.h"
//
//
//void list_add_end(struct List *ls, bool a, char b[], int c, char d[], int e, int f)
//{
//    struct shoes *node = list_new_node(a, b, c, d, e, f);
//
//    node->prev = ls->tail;
//    if (ls->tail)
//        ls->tail->next = node;
//    else
//        ls->head = node;
//    ls->tail = node;
//}
//
//void list_add_begin(struct List *ls, bool a, char b[], int c, char d[], int e, int f)
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
//
//void list_insert(struct List *ls, int index, bool a, char b[], int c, char d[], int e, int f)
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
//
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
//
//    while (index > 0) {
////        printf("%d %s ", index, p->model_name);
//        if (!p)
//            return 0;
//        p = p->next;
//        index--;
//    }
//    if(!p) return 0;
//    p->prev->next = p->next;
//
//    if (p->next)
//        p->next->prev = p->prev;
//    else
//        ls->tail = p->prev;
//    free(p);
//    return 1;
//}
//
//void list_show(struct List *ls, int reverse) {
//    if (!reverse) {
//        for (struct shoes *node = ls->head; node != NULL; node = node->next){
//            printf("Ortopedic: %d\n", node->ortopedic);
//            printf("Model: ");
////            for(int i = 0; i < 30; i++){
//            printf("%s\t", node->model_name);
//            printf("\nUSD: %d\t\n", node->usd);
//            printf("Brand: ");
//            printf("%s\t", node->brand_model);
//            printf("\nSize: %d\t\nLength: %d\t\n", node->size_shoes.size, node->size_shoes.length);
//            printf("---------------------------\n");
//        }
//    }
//    else{
//        for (struct shoes *node = ls->tail; node != NULL; node = node->prev) {
//            printf("Ortopedic: %d\n", node->ortopedic);
//            printf("Model: ");
//            printf("%s\t", node->model_name);
//            printf("\nUSD: %d\t\n", node->usd);
//            printf("Brand: ");
//            printf("%s\t", node->brand_model);
//            printf("\nSize: %d\t\nLength: %d\t\n", node->size_shoes.size, node->size_shoes.length);
//            printf("---------------------------\n");
//        }
//        printf("\n");
//
//    }
//}
//
//int compare_size(struct shoes* a, struct shoes* b) {
//    if (a->size_shoes.size == b->size_shoes.size)
//        return 0;
//    else if (a->size_shoes.size > b->size_shoes.size)
//        return 1;
//    else
//        return -1;
//}
//
//int compare_length(struct shoes* a, struct shoes* b) {
//    if (a->size_shoes.length == b->size_shoes.length)
//        return 0;
//    else if (a->size_shoes.length > b->size_shoes.length)
//        return 1;
//    else
//        return -1;
//}
//
//int compare_usd(struct shoes* a, struct shoes* b) {
//    if (a->usd == b->usd)
//        return 0;
//    else if (a->usd > b->usd)
//        return 1;
//    else
//        return -1;
//}
//
//void sort(struct List *ls, int(*compare)(struct shoes*, struct shoes*))
//{
//    struct shoes *set = ls->tail;
//    while (set != ls->head)
//    {
//        struct shoes *p = ls->head->next;
//        struct shoes *max = ls->head;
//        while (p != set->next) {
//            if (compare(p, max) >= 0)
//                max = p;
//            p = p->next;
//        }
//        if (set == max) { }
//        else if (max == ls->head && set == ls->tail) {
//            ls->head = set;
//            ls->tail = max;
//            ls->head->next = ls->tail->next;
//            ls->tail->prev = ls->head->prev;
//            ls->head->next->prev = ls->head;
//            ls->tail->prev->next = ls->tail;
//            ls->head->prev = NULL;
//            ls->tail->next = NULL;
//        }
//        else if (max == ls->head) {
//            ls->head = set;
//            max->prev = ls->head->prev;
//            ls->head->prev = NULL;
//            max->prev->next = max;
//            struct shoes *t = max->next;
//            max->next = ls->head->next;
//            ls->head->next = t;
//            max->next->prev = max;
//            ls->head->next->prev = ls->head;
//        }
//        else if (set == ls->tail) {
//            ls->tail = max;
//            set->next = ls->tail->next;
//            ls->tail->next = NULL;
//            set->next->prev = set;
//            struct shoes *t = set->prev;
//            set->prev = ls->tail->prev;
//            ls->tail->prev = t;
//            set->prev->next = set;
//            ls->tail->prev->next = ls->tail;
//        }
//        else {
//            struct shoes *t = max->next;
//            max->next = set->next;
//            set->next = t;
//            max->next->prev = max;
//            set->next->prev = set;
//            t = max->prev;
//            max->prev = set->prev;
//            set->prev = t;
//            max->prev->next = max;
//            set->prev->next = set;
//        }
//        set = max->prev;
//    }
//}