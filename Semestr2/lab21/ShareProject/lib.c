#include "ShareProject/lib.h"

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
void Read_From_File(struct List* ls) {
    FILE* myfile = fopen("/home/maestro/lab19.txt", "r");
    if (myfile != NULL) {
        printf("\nFile opened for reading!!!\n");
        for (struct shoes* i = ls->head; i!=NULL; i = i->next) {
            fscanf(myfile, "%d", &i->ortopedic);
            fscanf(myfile, "%s", i->model_name);
            fscanf(myfile, "%d", &i->usd);
            fscanf(myfile, "%s", i->brand_model);
            fscanf(myfile, "%d", &i->size_shoes.size);
            fscanf(myfile, "%d", &i->size_shoes.length);
            printf("Reading from func file: %d %s %d %s %d %d \n", i->ortopedic, i->model_name, i->usd, i->brand_model, i->size_shoes.size, i->size_shoes.length);

        }
    }
    else {
        printf("File cannot be reading");
    }
    fclose(myfile);
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

