#ifndef LAB21_ENTITY_H
#define LAB21_ENTITY_H

#include "lib.h"
//#ifdef DEBUG
#define log_info(L, ...) printf( "\33[1:33m[INFO]\33[0m /usr/bin/ld: %s:%d " L  "\n", __FILE__, __LINE__, ##__VA_ARGS__) //yellow
//#else
//#define log_info(M, ...)
//#endif

/**
 * Функція створення елементів списку
 *
 * Функція створює новий елемент списку
 * @param a ортопедичність
 * @param b назва моделі
 * @param c ціна
 * @param d назва бренду
 * @param f розмір устілки
 * @param e розмір чобота
 * @return повертає створений елемент
 */
struct shoes* list_new_node(bool a, char b[], int c, char d[], int e, int f);
/**
 * Функція додавання нового елементу в кінець списку
 *
 * Функція додає новий елемент в кінець списку
 * @param ls список {@link List} для додавання елементу
 * @param a ортопедичність
 * @param b назва моделі
 * @param c ціна
 * @param d назва бренду
 * @param f розмір устілки
 * @param e розмір чобота
 */
void list_add_end(struct List* ls, bool a, char b[], int c, char d[], int e, int f);
/**
 * Функція додавання нового елементу в початок списку
 *
 * Функція додає новий елемент в початок списку
 * @param ls список {@link List} для додавання елементу
 * @param a ортопедичність
 * @param b назва моделі
 * @param c ціна
 * @param d назва бренду
 * @param f розмір устілки
 * @param e розмір чобота
 */
void list_add_begin(struct List* ls, bool a, char b[], int c, char d[], int e, int f);
/**
 * Функція додавання нового елементу в список по індексу
 *
 * Функція додає новий елемент в список по індексу
 * @param ls список {@link List} для додавання елементу
 * @param a ортопедичність
 * @param index індекс для вставки
 * @param b назва моделі
 * @param c ціна
 * @param d назва бренду
 * @param f розмір устілки
 * @param e розмір чобота
 */
void list_insert(struct List* ls, int index, bool a, char b[], int c, char d[], int e, int f);
/**
 * Функція видалення елементу по індексу
 *
 * Функція видаляє елемент
 * @param ls список {@link List} для видалення елементу
 * @param index індекс для видалення
 */
int list_remove(struct List* ls, int index);
/**
 * Функція порівняння елементів списку
 *
 * Функція порівнює розмір чобота
 * @param a елемент списку {@link shoes} для порівняння
 * @param b елемент списку {@link shoes} для порівняння
 */
int compare_size(struct shoes* a, struct shoes* b);
/**
 * Функція порівняння елементів списку
 *
 * Функція порівнює розмір устілки
 * @param a елемент списку {@link shoes} для порівняння
 * @param b елемент списку {@link shoes} для порівняння
 */
int compare_length(struct shoes* a, struct shoes* b);
/**
 * Функція порівняння елементів списку
 *
 * Функція порівнює розмір ціни
 * @param a елемент списку {@link shoes} для порівняння
 * @param b елемент списку {@link shoes} для порівняння
 */
int compare_usd(struct shoes* a, struct shoes* b);

/**
 * Функція сортування елементів списку
 *
 * Функція порівнює розмір ціни
 * Функція порівнює розмір устілки
 * Функція порівнює розмір чобота
 * @param ls список {@link List} для сортування
 * @param compare викликає функції порівняння заданих полів
 */
void sort(struct List* ls, int(*compare)(struct shoes*, struct shoes*));
/**
 * Функція перевірки додавання нового елементу в кінець списку
 *
 * Функція перевіряє додавання нового елементу в кінець списку
 * @param ls список {@link List} для додавання елементу
 * @param a ортопедичність
 * @param b назва моделі
 * @param c ціна
 * @param d назва бренду
 * @param f розмір устілки
 * @param e розмір чобота
 */
void test_add_end(struct List *ls,  bool a, char b[], int c, char d[], int e, int f);
/**
 * Функція перевірки видалення елементу
 *
 * Функція перевіряє видаляти елемент
 * @param ls список {@link List} для видалення елементу
 * @param a ортопедичність
 * @param b назва моделі
 * @param c ціна
 * @param d назва бренду
 * @param f розмір устілки
 * @param e розмір чобота
 */
void test_add_begin(struct List *ls, bool a, char b[], int c, char d[], int e, int f);
/**
 * Функція перевірки вставки нового елементу по індексу
 *
 * Функція перевіряє вставку нового елементу по індексу
 * @param ls список {@link List} для вставки елементу
 * @param a ортопедичність
 * @param b назва моделі
 * @param c ціна
 * @param d назва бренду
 * @param f розмір устілки
 * @param e розмір чобота
 */
void test_insert(struct List *ls,int index, bool a, char b[], int c, char d[], int e, int f);
/**
 * Функція рахунку кількості елементів у масиві структур
 *
 * Функція рахує кількість елементів у масиві структур
 * @param ls список {@link List} у якому рахується кількусть елементів
 * @return повертає кількість елементів у структурі
 */
int count_list(struct List *ls);
/**
 * Функція перевірки видалення елементу
 *
 * Функція перевіряє видаляти елемент
 * @param ls список {@link List} для видалення елементу
 * @param a кількість елементів у списку
 */
void test_remove(struct List *ls, int a);
/**
 * Функція перевіряє сортування за ціною
 *
 * Функція перевірки сортування за ціною
 * @param ls список {@link List} у якому періряється сотрування за ціною
 */
void test_sort_usd(struct List *ls);
/**
 * Функція перевіряє сортування за розміром чобота
 *
 * Функція перевірки сортування за розміром чобота
 * @param ls список {@link List} у якому перевіряється сортування за розміромчобота
 */
void test_sort_size(struct List *ls);
/**
 * Функція перевіряє сортування за розміром устілки
 *
 * Функція перевірки сортування за розміром устілки
 * @param ls список {@link List} у якому перевіряється сортування за розміром устілки
 */
void test_sort_length(struct List *ls);

#endif //LAB21_ENTITY_H
