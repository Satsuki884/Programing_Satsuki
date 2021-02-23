/*#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // для int64_t
#include <inttypes.h> // для правильного вывода int64_t в printf

#ifdef __linux__
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#endif

int64_t getFileSize(const char* file_name){
    int64_t _file_size = 0;
    struct stat _fileStatbuff;
    int fd = open(file_name, O_RDONLY);
    if(fd == -1){
        _file_size = -1;
    }
    else{
        if ((fstat(fd, &_fileStatbuff) != 0) || (!S_ISREG(_fileStatbuff.st_mode))) {
            _file_size = -1;
        }
        else{
            _file_size = _fileStatbuff.st_size;
        }
        close(fd);
    }
    return _file_size;
}

#define FILE_PATH "some_file.txt"

int main(){
    int64_t file_size = getFileSize(FILE_PATH);
    printf("File size: %" PRId64 "\n", file_size);

    return 0;
}*/