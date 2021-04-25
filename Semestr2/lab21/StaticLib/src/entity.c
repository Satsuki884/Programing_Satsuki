//#include "entity.h"
//
//struct shoes* list_new_node(bool a, char b[], int c, char d[], int e, int f)
//{
//    struct shoes* node = (struct shoes*)malloc(sizeof(struct shoes));
//    node->ortopedic = a;
//    for (int i = 0; i < 30; i++) {
//        node->model_name[i] = b[i];
//    }
//    node->usd = c;
//    for (int i = 0; i < 10; i++) {
//        node->brand_model[i] = d[i];
//    }
//    node->size_shoes.size = e;
//    node->size_shoes.length = f;
//    node->next = NULL;
//    node->prev = NULL;
//    return node;
//}
//void list_add_end(struct List* ls, bool a, char b[], int c, char d[], int e, int f)
//{
//    struct shoes* node = list_new_node(a, b, c, d, e, f);
//
//    node->prev = ls->tail;
//    if (ls->tail)
//        ls->tail->next = node;
//    else
//        ls->head = node;
//    ls->tail = node;
//}
//void list_add_begin(struct List* ls, bool a, char b[], int c, char d[], int e, int f)
//{
//    struct shoes* node = list_new_node(a, b, c, d, e, f);
//
//    node->next = ls->head;
//    if (ls->head)
//        ls->head->prev = node;
//    else
//        ls->tail = node;
//    ls->head = node;
//}
//void list_insert(struct List* ls, int index, bool a, char b[], int c, char d[], int e, int f)
//{
//    if (index <= 0) {
//        list_add_begin(ls, a, b, c, d, e, f);
//        return;
//    }
//
//    struct shoes* p = ls->head;
//    while (index > 0) {
//        if (!p) {
//            list_add_end(ls, a, b, c, d, e, f);
//            return;
//        }
//        p = p->next;
//        index--;
//    }
//    struct shoes* node = list_new_node(a, b, c, d, e, f);
//    node->prev = p->prev;
//    node->next = p;
//    node->prev->next = node;
//    node->next->prev = node;
//}
//int list_remove(struct List* ls, int index)
//{
//    if (index < 0)
//        return 0;
//    struct shoes* p = ls->head;
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
//        //        printf("%d %s ", index, p->model_name);
//        if (!p)
//            return 0;
//        p = p->next;
//        index--;
//    }
//    if (!p) return 0;
//    p->prev->next = p->next;
//
//    if (p->next)
//        p->next->prev = p->prev;
//    else
//        ls->tail = p->prev;
//    free(p);
//    return 1;
//}
//int compare_size(struct shoes* a, struct shoes* b) {
//    if (a->size_shoes.size == b->size_shoes.size)
//        return 0;
//    else if (a->size_shoes.size > b->size_shoes.size)
//        return 1;
//    else
//        return -1;
//}
//int compare_length(struct shoes* a, struct shoes* b) {
//    if (a->size_shoes.length == b->size_shoes.length)
//        return 0;
//    else if (a->size_shoes.length > b->size_shoes.length)
//        return 1;
//    else
//        return -1;
//}
//int compare_usd(struct shoes* a, struct shoes* b) {
//    if (a->usd == b->usd)
//        return 0;
//    else if (a->usd > b->usd)
//        return 1;
//    else
//        return -1;
//}
//void sort(struct List* ls, int(*compare)(struct shoes*, struct shoes*))
//{
//    struct shoes* set = ls->tail;
//    while (set != ls->head)
//    {
//        struct shoes* p = ls->head->next;
//        struct shoes* max = ls->head;
//        while (p != set->next) {
//            if (compare(p, max) >= 0)
//                max = p;
//            p = p->next;
//        }
//        if (set == max) {}
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
//            struct shoes* t = max->next;
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
//            struct shoes* t = set->prev;
//            set->prev = ls->tail->prev;
//            ls->tail->prev = t;
//            set->prev->next = set;
//            ls->tail->prev->next = ls->tail;
//        }
//        else {
//            struct shoes* t = max->next;
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
//
//void test_add_end(struct List *ls,  bool a, char b[], int c, char d[], int e, int f){
//    log_info("Test function: %s" , __FUNCTION__ );
//    if (ls->tail->ortopedic != a){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n",ls->tail->ortopedic, a);
//    } else if (strcmp(ls->tail->model_name, b) != 0){
//        printf("Тест провален. Ожидаемое значение %s. не равно %s.\n", ls->tail->model_name, b);
//    } else if (strcmp(ls->tail->brand_model, d) != 0){
//        printf("Тест провален. Ожидаемое значение %s не равно %s\n", ls->tail->brand_model, d);
//    } else if (ls->tail->usd != c){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", ls->tail->usd, c);
//    } else if (ls->tail->size_shoes.size != e){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", ls->tail->size_shoes.size, e);
//    } else if (ls->tail->size_shoes.length != f){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n", ls->tail->size_shoes.length, f);
//    } else{
//        printf("Тест пройден успешно\n");
//    }
//}
//void test_add_begin(struct List *ls, bool a, char b[], int c, char d[], int e, int f){
//    log_info("Test function: %s" , __FUNCTION__ );
//    if (ls->head->ortopedic != a){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n",ls->head->ortopedic, a);
//    } else if (strcmp(ls->head->model_name, b) != 0){
//        printf("Тест провален. Ожидаемое значение %s. не равно %s.\n", ls->head->model_name, b);
//    } else if (strcmp(ls->head->brand_model, d) != 0){
//        printf("Тест провален. Ожидаемое значение %s не равно %s\n", ls->head->brand_model, d);
//    } else if (ls->head->usd != c){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", ls->head->usd, c);
//    } else if (ls->head->size_shoes.size != e){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", ls->head->size_shoes.size, e);
//    } else if (ls->head->size_shoes.length != f){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n", ls->head->size_shoes.length, f);
//    } else{
//        printf("Тест пройден успешно\n");
//    }
//}
//void test_insert(struct List *ls,int index, bool a, char b[], int c, char d[], int e, int f){
//    log_info("Test function: %s" , __FUNCTION__ );
//    struct shoes *p = ls->head;
//
//    if(index>0) {
//        for (int i = 0; i < index; i++) {
//            p = p->next;
//        }
//    }
//    if (p->ortopedic != a){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n",p->ortopedic, a);
//    } else if (strcmp(p->model_name, b) != 0){
//        printf("Тест провален. Ожидаемое значение %s. не равно %s.\n", p->model_name, b);
//    } else if (strcmp(p->brand_model, d) != 0){
//        printf("Тест провален. Ожидаемое значение %s не равно %s\n", p->brand_model, d);
//    } else if (p->usd != c){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", p->usd, c);
//    } else if (p->size_shoes.size != e){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", p->size_shoes.size, e);
//    } else if (p->size_shoes.length != f){
//        printf("Тест провален. Ожидаемое значение %d не равно %d\n", p->size_shoes.length, f);
//    } else{
//        printf("Тест пройден успешно\n");
//    }
//}
//int count_list(struct List *ls){
//    int count =0;
//    struct shoes *p = ls->head;
//    while(p){
//        p=p->next;
//        count++;
//    }
//    return count;
//}
//void test_remove(struct List *ls, int a) {
//    log_info("Test function: %s" , __FUNCTION__ );
//    int n = count_list(ls);
//    if (n == a) printf("Тест пройден успешно\n");
//    else printf("Тест провален.\n");
//}
//void test_sort_usd(struct List *ls){
//    log_info("Test function: %s" , __FUNCTION__ );
//    struct shoes *p = ls->head;
//    int max =0;
//    bool error = false;
//    while(p && !error){
//        if(max>p->usd) error = true;
//        max = p->usd;
//        p=p->next;
//    }
//    if (!error) printf("Тест пройден успешно\n");
//    else printf("Тест провален.\n");
//}
//void test_sort_size(struct List *ls){
//    log_info("Test function: %s" , __FUNCTION__ );
//    struct shoes *p = ls->head;
//    int max =0;
//    bool error = false;
//    while(p && !error){
//        if(max>p->size_shoes.size) error = true;
//        max = p->size_shoes.size;
//        p=p->next;
//    }
//    if (!error) printf("Тест пройден успешно\n");
//    else printf("Тест провален.\n");
//}
//void test_sort_length(struct List *ls){
//    log_info("Test function: %s" , __FUNCTION__ );
//    struct shoes *p = ls->head;
//    int max =0;
//    bool error = false;
//    while(p && !error){
//        if(max>p->size_shoes.length) error = true;
//        max = p->size_shoes.length;
//        p=p->next;
//    }
//    if (!error) printf("Тест пройден успешно\n");
//    else printf("Тест провален.\n");
//}