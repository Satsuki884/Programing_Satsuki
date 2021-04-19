#ifndef LAB21_MAIN_H
#define LAB21_MAIN_H

/**
 * @file data.h
 * @brief Файл з описом структури взуття, розміру взуття, його характеристик та функцій
 *
 * @author Klimenko Stanislava
 * @date 19-apr-2021
 * @version 1.0
 */
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
/**
 * Структура «Розміру взуття»
 */
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
/**
 * Функція читання з файлу
 *
 * Функція читає данні з заданого файлу та записує їх в задану структуру
 * @param ls масив структур {@link List} для заповнення
 */
void Read_From_File(struct List* ls);
/**
 * Функція виводу в файл
 *
 * Функція виводить відсортований масив структур в файл
 * @param ls масив структур {@link List} що виводиться
 */
void Save_In_File(struct List *ls);
/**
 * Функція виводу в консоль
 *
 * @param ls список {@link List} для зчитування
 * @param reverse напрям списку
 */
void list_show(struct List* ls, int reverse);




#endif //LAB21_MAIN_H
