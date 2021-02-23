/*#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>


#define DIRNAME "."
#define OFNAME  "out.log"

int main(void)
{
    FILE *ofp;
    DIR *dp;
    struct dirent *dent;

    if( (dp = opendir(DIRNAME)) == NULL) {

        fprintf(stderr, "opendir: %s: %s\n", DIRNAME, strerror(errno));
        return 1;
    }
    if( (ofp = fopen(OFNAME, "w")) == NULL) {
        fprintf(stderr, "fopen: %s: %s\n", OFNAME, strerror(errno));
        return 1;
    }

// построчно считываем имена файлов из каталога
    while(dent = readdir(dp))


// проверка, что имя каталога не равно «.» и «..»
        if(strcmp(".", dent->d_name) && strcmp("..", dent->d_name)) {
            closedir(dp);
        }
        else{
            while ( (dent = readdir(dp)) != NULL) {
                printf("%s [%d]\n",
                       dent->d_name, dent->d_type);
            }
        }
    fclose(ofp);
    return 0;
}*/