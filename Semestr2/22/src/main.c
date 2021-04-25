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
struct shoes* list_new_node(bool a, char b[], int c, char d[], int e, int f)
{
    struct shoes* node = (struct shoes*)malloc(sizeof(struct shoes));
    node->ortopedic = a;
    for (int i = 0; i < 30; i++) {
        node->model_name[i] = b[i];
    }
    node->usd = c;
    for (int i = 0; i < 10; i++) {
        node->brand_model[i] = d[i];
    }
    node->size_shoes.size = e;
    node->size_shoes.length = f;
    node->next = NULL;
    node->prev = NULL;
    return node;
}
void list_add_end(struct List* ls, bool a, char b[], int c, char d[], int e, int f)
{
    struct shoes* node = list_new_node(a, b, c, d, e, f);

    node->prev = ls->tail;
    if (ls->tail)
        ls->tail->next = node;
    else
        ls->head = node;
    ls->tail = node;
}
void list_add_begin(struct List* ls, bool a, char b[], int c, char d[], int e, int f)
{
    struct shoes* node = list_new_node(a, b, c, d, e, f);

    node->next = ls->head;
    if (ls->head)
        ls->head->prev = node;
    else
        ls->tail = node;
    ls->head = node;
}
void list_insert(struct List* ls, int index, bool a, char b[], int c, char d[], int e, int f)
{
    if (index <= 0) {
        list_add_begin(ls, a, b, c, d, e, f);
        return;
    }

    struct shoes* p = ls->head;
    while (index > 0) {
        if (!p) {
            list_add_end(ls, a, b, c, d, e, f);
            return;
        }
        p = p->next;
        index--;
    }
    struct shoes* node = list_new_node(a, b, c, d, e, f);
    node->prev = p->prev;
    node->next = p;
    node->prev->next = node;
    node->next->prev = node;
}
int list_remove(struct List* ls, int index)
{
    if (index < 0)
        return 0;
    struct shoes* p = ls->head;
    if (index == 0) {
        if (!ls->head)
            return 0;
        ls->head = ls->head->next;
        if (p->next)
            p->next->prev = NULL;
        else
            ls->tail = NULL;
        free(p);
        return 1;
    }

    while (index > 0) {
        //        printf("%d %s ", index, p->model_name);
        if (!p)
            return 0;
        p = p->next;
        index--;
    }
    if (!p) return 0;
    p->prev->next = p->next;

    if (p->next)
        p->next->prev = p->prev;
    else
        ls->tail = p->prev;
    free(p);
    return 1;
}
int compare_size(struct shoes* a, struct shoes* b) {
    if (a->size_shoes.size == b->size_shoes.size)
        return 0;
    else if (a->size_shoes.size > b->size_shoes.size)
        return 1;
    else
        return -1;
}
int compare_length(struct shoes* a, struct shoes* b) {
    if (a->size_shoes.length == b->size_shoes.length)
        return 0;
    else if (a->size_shoes.length > b->size_shoes.length)
        return 1;
    else
        return -1;
}
int compare_usd(struct shoes* a, struct shoes* b) {
    if (a->usd == b->usd)
        return 0;
    else if (a->usd > b->usd)
        return 1;
    else
        return -1;
}
void sort(struct List* ls, int(*compare)(struct shoes*, struct shoes*))
{
    struct shoes* set = ls->tail;
    while (set != ls->head)
    {
        struct shoes* p = ls->head->next;
        struct shoes* max = ls->head;
        while (p != set->next) {
            if (compare(p, max) >= 0)
                max = p;
            p = p->next;
        }
        if (set == max) {}
        else if (max == ls->head && set == ls->tail) {
            ls->head = set;
            ls->tail = max;
            ls->head->next = ls->tail->next;
            ls->tail->prev = ls->head->prev;
            ls->head->next->prev = ls->head;
            ls->tail->prev->next = ls->tail;
            ls->head->prev = NULL;
            ls->tail->next = NULL;
        }
        else if (max == ls->head) {
            ls->head = set;
            max->prev = ls->head->prev;
            ls->head->prev = NULL;
            max->prev->next = max;
            struct shoes* t = max->next;
            max->next = ls->head->next;
            ls->head->next = t;
            max->next->prev = max;
            ls->head->next->prev = ls->head;
        }
        else if (set == ls->tail) {
            ls->tail = max;
            set->next = ls->tail->next;
            ls->tail->next = NULL;
            set->next->prev = set;
            struct shoes* t = set->prev;
            set->prev = ls->tail->prev;
            ls->tail->prev = t;
            set->prev->next = set;
            ls->tail->prev->next = ls->tail;
        }
        else {
            struct shoes* t = max->next;
            max->next = set->next;
            set->next = t;
            max->next->prev = max;
            set->next->prev = set;
            t = max->prev;
            max->prev = set->prev;
            set->prev = t;
            max->prev->next = max;
            set->prev->next = set;
        }
        set = max->prev;
    }
}
void test_add_end(struct List *ls,  bool a, char b[], int c, char d[], int e, int f){
    log_info("Test function: %s" , __FUNCTION__ );
    if (ls->tail->ortopedic != a){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n",ls->tail->ortopedic, a);
    } else if (strcmp(ls->tail->model_name, b) != 0){
        printf("Тест провален. Ожидаемое значение %s. не равно %s.\n", ls->tail->model_name, b);
    } else if (strcmp(ls->tail->brand_model, d) != 0){
        printf("Тест провален. Ожидаемое значение %s не равно %s\n", ls->tail->brand_model, d);
    } else if (ls->tail->usd != c){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", ls->tail->usd, c);
    } else if (ls->tail->size_shoes.size != e){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", ls->tail->size_shoes.size, e);
    } else if (ls->tail->size_shoes.length != f){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n", ls->tail->size_shoes.length, f);
    } else{
        printf("Тест пройден успешно\n");
    }
}
void test_add_begin(struct List *ls, bool a, char b[], int c, char d[], int e, int f){
    log_info("Test function: %s" , __FUNCTION__ );
    if (ls->head->ortopedic != a){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n",ls->head->ortopedic, a);
    } else if (strcmp(ls->head->model_name, b) != 0){
        printf("Тест провален. Ожидаемое значение %s. не равно %s.\n", ls->head->model_name, b);
    } else if (strcmp(ls->head->brand_model, d) != 0){
        printf("Тест провален. Ожидаемое значение %s не равно %s\n", ls->head->brand_model, d);
    } else if (ls->head->usd != c){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", ls->head->usd, c);
    } else if (ls->head->size_shoes.size != e){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", ls->head->size_shoes.size, e);
    } else if (ls->head->size_shoes.length != f){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n", ls->head->size_shoes.length, f);
    } else{
        printf("Тест пройден успешно\n");
    }
}
void test_insert(struct List *ls,int index, bool a, char b[], int c, char d[], int e, int f){
    log_info("Test function: %s" , __FUNCTION__ );
    struct shoes *p = ls->head;

    if(index>0) {
        for (int i = 0; i < index; i++) {
            p = p->next;
        }
    }
    if (p->ortopedic != a){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n",p->ortopedic, a);
    } else if (strcmp(p->model_name, b) != 0){
        printf("Тест провален. Ожидаемое значение %s. не равно %s.\n", p->model_name, b);
    } else if (strcmp(p->brand_model, d) != 0){
        printf("Тест провален. Ожидаемое значение %s не равно %s\n", p->brand_model, d);
    } else if (p->usd != c){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", p->usd, c);
    } else if (p->size_shoes.size != e){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", p->size_shoes.size, e);
    } else if (p->size_shoes.length != f){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n", p->size_shoes.length, f);
    } else{
        printf("Тест пройден успешно\n");
    }
}
int count_list(struct List *ls){
    int count =0;
    struct shoes *p = ls->head;
    while(p){
        p=p->next;
        count++;
    }
    return count;
}
void test_remove(struct List *ls, int a) {
    log_info("Test function: %s" , __FUNCTION__ );
    int n = count_list(ls);
    if (n == a) printf("Тест пройден успешно\n");
    else printf("Тест провален.\n");
}
void test_sort_usd(struct List *ls){
    log_info("Test function: %s" , __FUNCTION__ );
    struct shoes *p = ls->head;
    int max =0;
    bool error = false;
    while(p && !error){
        if(max>p->usd) error = true;
        max = p->usd;
        p=p->next;
    }
    if (!error) printf("Тест пройден успешно\n");
    else printf("Тест провален.\n");
}
void test_sort_size(struct List *ls){
    log_info("Test function: %s" , __FUNCTION__ );
    struct shoes *p = ls->head;
    int max =0;
    bool error = false;
    while(p && !error){
        if(max>p->size_shoes.size) error = true;
        max = p->size_shoes.size;
        p=p->next;
    }
    if (!error) printf("Тест пройден успешно\n");
    else printf("Тест провален.\n");
}
void test_sort_length(struct List *ls){
    log_info("Test function: %s" , __FUNCTION__ );
    struct shoes *p = ls->head;
    int max =0;
    bool error = false;
    while(p && !error){
        if(max>p->size_shoes.length) error = true;
        max = p->size_shoes.length;
        p=p->next;
    }
    if (!error) printf("Тест пройден успешно\n");
    else printf("Тест провален.\n");
}
void list_show(struct List* ls, int reverse) {
    if (!reverse) {
        for (struct shoes* node = ls->head; node != NULL; node = node->next) {
            printf("Ortopedic: %d\n", node->ortopedic);
            printf("Model: ");
            //            for(int i = 0; i < 30; i++){
            printf("%s\t", node->model_name);
            printf("\nUSD: %d\t\n", node->usd);
            printf("Brand: ");
            printf("%s\t", node->brand_model);
            printf("\nSize: %d\t\nLength: %d\t\n", node->size_shoes.size, node->size_shoes.length);
            printf("---------------------------\n");
        }
    }
    else {
        for (struct shoes* node = ls->tail; node != NULL; node = node->prev) {
            printf("Ortopedic: %d\n", node->ortopedic);
            printf("Model: ");
            printf("%s\t", node->model_name);
            printf("\nUSD: %d\t\n", node->usd);
            printf("Brand: ");
            printf("%s\t", node->brand_model);
            printf("\nSize: %d\t\nLength: %d\t\n", node->size_shoes.size, node->size_shoes.length);
            printf("---------------------------\n");
        }
        printf("\n");

    }
}
int reg_func(char * string1){
    regex_t regex;
    char *reg = "^[А-ЯЁA-Z0-9][-a-zA-Z0-9а-яёА-ЯЁ.,;!?: ]*$";
    int return_value = regcomp(&regex,reg,0);
    return_value = regexec(&regex, string1, 0, NULL, 0);
    return return_value;
}
int reg(char * string){
    regex_t regex;
    char *reg = "^([а-яёА-ЯЁa-wA-Z0-9]+([^а-яёА-ЯЁa-zA-Z0-9]+|$)){2,}$";
    int return_value = regcomp(&regex,reg,REG_EXTENDED);
    return_value = regexec(&regex, string, 0, NULL, 0);
    return return_value;
}
int reg2(char * string){
    regex_t regex;
    char *reg = "(\\.\\.|  |,,|;;|::|!!|\\?\\?|--)";
    int return_value = regcomp(&regex,reg,REG_EXTENDED);
    return_value = regexec(&regex, string, 0, NULL, 0);
    return return_value;
}
int Read_From_File(struct List* ls) {
    FILE* myfile = fopen("/home/maestro/lab19.txt", "r");
    if (myfile != NULL) {
        printf("\nFile opened for reading!!!\n\n");
        for (struct shoes* i = ls->head; i!=NULL; i = i->next) {
            fscanf(myfile, "%d", &i->ortopedic);
            fscanf(myfile, " %s", i->model_name);
            int a = reg_func(i->model_name);
            int b = reg(i->model_name);
            int c = reg2(i->model_name);
            if (a == 0) {
                if(c==0){
                    printf("Pattern not foundC.\n");
                    return 1;
                }
                printf("Pattern found.\n");
                if(b==0){
                    printf("Reading from file: %s\n", i->model_name);
                }
            }
            else if (a == REG_NOMATCH) {
                printf("Pattern not found.\n");
                return 1;
            } else {
                printf("An error occured.\n");
                return 1;
            }
            fscanf(myfile, "%d", &i->usd);
            fscanf(myfile, " %s", i->brand_model);
            a = reg_func(i->brand_model);
            b = reg(i->brand_model);
            c = reg2(i->brand_model);
            if (a == 0) {
                if(c==0){
                    printf("Pattern not found.\n");
                    return 1;
                }
                printf("Pattern found.\n");
                if(b==0){
                    printf("Reading from file: %s\n", i->brand_model);
                }
            }
            else if (a == REG_NOMATCH) {
                printf("Pattern not found.\n");
                return 1;
            } else {
                printf("An error occured.\n");
                return 1;
            }
            fscanf(myfile, "%d", &i->size_shoes.size);
            fscanf(myfile, "%d", &i->size_shoes.length);
            printf("Reading from func file: %d %s %d %s %d %d \n\n", i->ortopedic, i->model_name, i->usd, i->brand_model, i->size_shoes.size, i->size_shoes.length);

        }
    }
    else {
        printf("File cannot be reading");
        return 1;
    }
    fclose(myfile);
    return 0;
}
void Save_In_File(struct List *ls) {
    FILE *file_out;
    char file_name2[] = {"lab.txt"};
    file_out = fopen(file_name2, "w");
    for (struct shoes* node = ls->tail; node != NULL; node = node->prev) {
        fprintf(file_out, "%d %s %d %s %d %d\n", node->ortopedic, node->brand_model, node->usd,
                node->model_name, node->size_shoes.size, node->size_shoes.length);
    }
    fclose(file_out);
}

int main() {
    regex_t regex;
    srand(time(NULL));
    time_t begin = clock();

    int flag;
    printf("Enter the assembly type (0 - with DEBUG, 1 - without DEBUG): ");
    scanf("%d", &flag);
    if(flag == 0) {
        const char *func = __FUNCTION__;
        log_info("start");
        time_t CurTime;
        struct tm * TimeInfo;
        time ( &CurTime );
        TimeInfo = localtime ( &CurTime );
        log_info("Function: %s" , func );
        log_info("Time & Date: %s", asctime (TimeInfo));
    }
    setlocale(LC_ALL, "rus");
    struct List* ls = (struct List*)malloc(sizeof(struct List));
    ls->head = NULL;
    ls->tail = NULL;
    char* tmp1 = (char*)malloc(20 * sizeof(char));
    strcpy(tmp1, "fjvbfdj");
    list_add_end(ls, 1, tmp1, 23, tmp1, 4, 5);
    list_add_end(ls, 1, tmp1, 23, tmp1, 4, 5);
    list_add_end(ls, 1, tmp1, 23, tmp1, 4, 5);
    list_add_end(ls, 1, tmp1, 23, tmp1, 4, 5);
    int e = Read_From_File(ls);
    if(e == 1){
        printf("\33[0:31m[ERROR] : Pattern not found\33[0m");
        return 0;
    }
    free(tmp1);
    bool ortopedic = 1;
    char model_name[30] = { "Gaw" };
    int usd = 3000;
    char brand_model[10] = { "Nike" };
    int size = 35;
    int length = 20;
    list_show(ls, 0);
    char a;
    printf("Введіть\n'a' для добавления елемента в конец,\n'b'  для добавления елемента в конец,\n'c'  для добавления елемента по индексу,\n'd' для удаления эелемента по индексу,\n's' для сортировке по размеру ноги,\n'l' для сортировке по длине устилки,\n'u' для сортировки по цене:\n");
    scanf(" %c", &a);
    int k =0;
    time_t end_time2 = 0; // конечное время
    time_t end_time = 0; // конечное время
    time_t search_time2 = 0;
    time_t search_time = 0;
    time_t begin2 = clock();
    switch (a) {
        case 'a':
            list_add_end(ls, ortopedic, model_name, usd, brand_model, size, length);
            list_show(ls, 0);
            end_time2 = clock(); // конечное время
            search_time2 = end_time2 - begin;
            printf("Затрачено времени на выполнение программы: %d\n", search_time2);
            test_add_end(ls, ortopedic, model_name, usd, brand_model, size, length);
            end_time = clock(); // конечное время
            search_time = end_time - begin2;
            printf("Затрачено времени на выполнение теста: %d\n", search_time);
            Save_In_File(ls);
            free(ls);
            break;
        case 'b':
            list_add_begin(ls, ortopedic, model_name, usd, brand_model, size, length);
            list_show(ls, 0);
            end_time2 = clock(); // конечное время
            search_time2 = end_time2 - begin;
            printf("Затрачено времени на выполнение программы: %d\n", search_time2);
            test_add_begin(ls, ortopedic, model_name, usd, brand_model, size, length);
            end_time = clock(); // конечное время
            search_time = end_time - begin2;
            printf("Затрачено времени на выполнение теста: %d\n", search_time);
            Save_In_File(ls);
            free(ls);
            break;
        case 'c':
            list_insert(ls, 10, ortopedic, model_name, usd, brand_model, size, length);
            list_show(ls, 0);
            end_time2 = clock(); // конечное время
            search_time2 = end_time2 - begin;
            printf("Затрачено времени на выполнение программы: %d\n", search_time2);
            test_insert(ls,2, ortopedic, model_name, usd, brand_model, size, length);
            end_time = clock(); // конечное время
            search_time = end_time - begin2;
            printf("Затрачено времени на выполнение теста: %d\n", search_time);
            Save_In_File(ls);
            free(ls);
            break;
        case 'd':
            k = count_list(ls);
            list_remove(ls, 1);
            list_show(ls, 0);
            end_time2 = clock(); // конечное время
            search_time2 = end_time2 - begin;
            printf("Затрачено времени на выполнение программы: %d\n", search_time2);
            test_remove(ls, k-1);
            end_time = clock(); // конечное время
            search_time = end_time - begin2;
            printf("Затрачено времени на выполнение теста: %d\n", search_time);
            Save_In_File(ls);
            free(ls);
            break;
        case 's':
            sort(ls, compare_size);
            list_show(ls, 0);
            end_time2 = clock(); // конечное время
            search_time2 = end_time2 - begin;
            printf("Затрачено времени на выполнение программы: %d\n", search_time2);
            test_sort_size(ls);
            end_time = clock(); // конечное время
            search_time = end_time - begin2;
            printf("Затрачено времени на выполнение теста: %d\n", search_time);
            free(ls);
            break;
        case 'l':
            sort(ls, compare_length);
            list_show(ls, 0);
            end_time2 = clock(); // конечное время
            search_time2 = end_time2 - begin;
            printf("Затрачено времени на выполнение программы: %d\n", search_time2);
            test_sort_length(ls);
            end_time = clock(); // конечное время
            search_time = end_time - begin2;
            printf("Затрачено времени на выполнение теста: %d\n", search_time);
            Save_In_File(ls);
            free(ls);
            break;
        case 'u':
            sort(ls, compare_usd);
            list_show(ls, 0);
            end_time2 = clock(); // конечное время
            search_time2 = end_time2 - begin;
            printf("Затрачено времени на выполнение программы: %d\n", search_time2);
            test_sort_usd(ls);
            end_time = clock(); // конечное время
            search_time = end_time - begin2;
            printf("Затрачено времени на выполнение теста: %d\n", search_time);
            Save_In_File(ls);
            free(ls);
            break;
        default:
            printf("Неправильный ввод.\n");
            end_time2 = clock(); // конечное время
            search_time2 = end_time2 - begin;
            printf("Затрачено времени на выполнение программы: %d\n", search_time2);
            free(ls);
    }

}