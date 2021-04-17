#include "StaticProject/entity.h"
int main() {

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
    Read_From_File(ls);
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