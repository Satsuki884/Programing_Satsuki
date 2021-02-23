/*#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

#define HOME gevent ("HOME")

int main()
{
    struct dirent *dp;
    DIR *dir = opendir("~/maestro/Programing_Satsuki/lab14");
    while ((dp = readdir(dir))!= NULL){
        printf("%s\n", dp->d_name);
    }
    closedir(dir);
    return 0;
}*/