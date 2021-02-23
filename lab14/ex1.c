#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h> // для int64_t
#include <inttypes.h> // для правильного вывода int64_t в printf

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // для int64_t
#include <inttypes.h> // для правильного вывода int64_t в printf

int64_t getFileSize(const char* file_name){
    int64_t _file_size = 0;
    FILE* fd = fopen(file_name, "rb");
    if(fd == NULL){
        _file_size = -1;
    }
    else{
        fseek(fd, 0, SEEK_END);
        _file_size = ftello(fd);
        fclose(fd);
    }
    return _file_size;
}

void directoria(char *name)
{
    DIR *dir;
    struct dirent *entry;
    char smth_name[255];
    dir = opendir(name);
    if (!dir) {
        perror("diropen");;
    }

    while ( (entry = readdir(dir)) != NULL) {
        if(strcmp(entry -> d_name, ".") !=0 && strcmp(entry -> d_name, "..") !=0) {
            if(entry -> d_type == DT_DIR) {



                strcpy(smth_name, name);
                strcat (smth_name, "/");
                strcat (smth_name, entry -> d_name);
                printf("%s [%d]\n",
                       entry->d_name, entry->d_type);

                directoria(smth_name);
            }

            printf("%s [%d]\n",
               entry->d_name, entry->d_type);
        }
    }
    closedir(dir);
}
int main() {
    char* name = "/home/maestro/Programing_Satsuki/lab14";

    directoria(name);
    int64_t file_size = getFileSize(FILE_PATH);
    printf("File size: %" PRId64 "\n", file_size);
}
