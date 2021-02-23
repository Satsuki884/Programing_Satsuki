/*#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main() {

    DIR *dir;
    struct dirent *entry;

    dir = opendir("/home/maestro/Programing_Satsuki/lab14");
    if (!dir) {
        perror("diropen");
    };
    while ( (entry = readdir(dir)) != NULL) {
        printf("%s [%d]\n",
               entry->d_name, entry->d_type);
    }
    closedir(dir);
}*/