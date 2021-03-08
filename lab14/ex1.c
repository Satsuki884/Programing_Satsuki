/*#include <stdio.h>
#include <dirent.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stdlib.h>


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
                printf("%s 5\n", entry->d_name);

                directoria(smth_name);
            }

            printf("%s [%d]\n",
               entry->d_name, entry->d_type);

        }
    }
    closedir(dir);
}

int main() {
    char* directory_name = "/home/maestro/Programing_Satsuki/lab14";

    directoria(directory_name);
}
*/