#include <stdio.h>
#include <dirent.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stdlib.h>
int size_file(FILE *file){
    long int save_pos = ftell(file);
    fseek(file, 0L, SEEK_END);
    long int file_size = ftell(file);
    fseek(file, save_pos, SEEK_SET);
    return file_size;
}
void print_space(int coint)
{
    char space[] = {"|   "};
    for(int i = 0; i < (coint - 1); i++){
        printf("%s", space);
    }
    printf("|---");
}

int directoria(char *name, int coint)
{
    DIR *dir;
    struct dirent *entry;
    char smth_name[255];
    dir = opendir(name);
    if (!dir) {
        perror("diropen");;
    }
    int size;
    FILE *fp;
    int total_size = 0;
    while ( (entry = readdir(dir)) != NULL) {
        if(strcmp(entry -> d_name, ".") !=0 && strcmp(entry -> d_name, "..") !=0) {
            if (entry->d_type == DT_DIR) {

                strcpy(smth_name, name);
                strcat(smth_name, "/");
                strcat(smth_name, entry->d_name);
                size = 0;//size = size_file(entry);
                print_space(coint);
                printf("%s\n", entry->d_name);

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
                printf("%s %d \n", entry->d_name, size);

            }
        }
    }
    closedir(dir);
    print_space(coint);
    printf("Total size: %d\n", total_size);

    return total_size;
}

int main() {
    char* directory_name = "/home/maestro/Programing_Satsuki/lab14";
    int coint = 1;
    printf(".\n");
    directoria(directory_name, coint);

}
