#include <stdlib.h>
#include <string.h>

struct Container{
    struct TeseElement *array;
    int size;
};
void insert(char array1[], int pos, char array2[]);

int main(){
    char s1[12] = {"abracadabra"};
    char s2[6] = {"TEXT2"};
    int pos = 2;
    char result1[17] = insert(s1[12], pos, s2[6]);
}

/*void reduse(struct Container * container, size_t pos) {
    if (container->size == 0) return; // nothing to delete
    struct TestElement* new_array = malloc((container->size - 1) *
                                           sizeof(struct TestElement));
    if (pos >= container->size) pos = container->size - 1;
    memcpy(new_array, container->array, pos * sizeof(struct TestElement));
    memcpy(new_array + pos, container->array + pos + 1, (container->size -
                                                         pos - 1) * sizeof(struct TestElement));
    free(container->array);
    container->array = new_array;
    container->size--;
}
*/
void insert(char array1[], int pos, char array2[]) {
    char *new_array = malloc((strlen(array1)+strlen(array2)) * sizeof(char));
    if (pos > strlen(array1)) pos = strlen(array1);
    memcpy(new_array, array1, pos * sizeof(char));
    memcpy(new_array + pos, array2, (strlen(array2)*sizeof(char)));
    memcpy(new_array + strlen(array2) + 1, array1 + pos, (strlen(array1)-pos) * sizeof(char));
    free(array1);
    array1 = *new_array;
}
