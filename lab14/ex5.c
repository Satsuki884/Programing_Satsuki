#include <stdio.h>
#include <dirent.h>
#include <string.h>
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_RESET "\x1b[0m"
int size_file(FILE *file){
    long int save_pos = ftell(file);
    fseek(file, 0L, SEEK_END);
    long int file_size = ftell(file);
    fseek(file, save_pos, SEEK_SET);
    return file_size;
}

void print_space(int coint){
    char space[] = {"|   "};
    for(int i = 0; i < (coint - 1); i++){
        printf("%s", space);
    }
    printf("|---");
}

float directoria(char *name, int coint){
    DIR *dir;
    struct dirent *entry;
    char smth_name[255];
    dir = opendir(name);
    if (!dir) {
        perror("diropen");;
    }
    float size;
    FILE *fp;
    float total_size = 0;
    while ( (entry = readdir(dir)) != NULL) {
        if(strcmp(entry -> d_name, ".") !=0 && strcmp(entry -> d_name, "..") !=0) {
            if (entry->d_type == DT_DIR) {
                strcpy(smth_name, name);
                strcat(smth_name, "/");
                strcat(smth_name, entry->d_name);
                print_space(coint);
                printf(ANSI_COLOR_BLUE "%s\n" ANSI_COLOR_RESET, entry->d_name);
                total_size+= directoria(smth_name, coint+1);
            } else{
                strcpy(smth_name, name);
                strcat(smth_name, "/");
                strcat(smth_name, entry->d_name);
                fp = fopen(smth_name, "rb");
                size = size_file(fp);
                total_size += size;
                fclose(fp);
                print_space(coint);
                printf("%s %5.2f \n", entry->d_name, size/1000);
            }
        }
    }
    closedir(dir);
    print_space(coint);
    printf("Total size: %5.2f\n", total_size/1000);
    return total_size;
}

int main() {
    char* directory_name = "/home/maestro/Programing_Satsuki/lab14";
    int coint = 1;
    printf(".\n");
    directoria(directory_name, coint);
}
