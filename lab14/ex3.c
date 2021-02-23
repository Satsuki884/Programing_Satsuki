/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

void inum_to_filename (int inode_arg, char *pathBuffer, int size_arg) {
    DIR *dir_ptr = opendir("/");
    struct dirent *dirent_ptr = readdir(dir_ptr);
    int counter = 0;

    while (counter != 1) {
        if (inode_arg == dirent_ptr->d_ino) {

            strcat(pathBuffer, "/");
            strcat(pathBuffer, dirent_ptr->d_name);

            counter = counter + 1;
            return;

        } else {
            dirent_ptr = readdir(dir_ptr);
        }
    }

    closedir(dir_ptr);
}

int filename_to_inum (char *src) {
    int res = 0;
    struct stat info;
    int result = stat(src, &info);

    if (result != 0) {
        fprintf(stderr, "Cannot stat ");
        perror(src);
        exit(EXIT_FAILURE);
    } else {
        res = info.st_ino;
    }

    return res;
}

void display_path (int ino_src) {
    int bufSize = 4096;
    char pathBuffer[bufSize];
    int ino_prnt = filename_to_inum("..");

    if (ino_src == ino_prnt) {
        //print for test
        inum_to_filename(ino_src, pathBuffer, bufSize);
        printf("%s", pathBuffer);
        return;
    } else {
        //print for test
        chdir("..");
        inum_to_filename(ino_src, pathBuffer, bufSize);
        display_path(ino_prnt);
        printf("%s", pathBuffer);
    }
}

int main (int argc, char *argv[]) {
    int c_ino = filename_to_inum(".");
    display_path(c_ino);
    printf("\n");
}*/