char *fd = "myfile.txt";
struct stat *buf;

buf = malloc(sizeof(struct stat));

stat(fd, buf);
int size = buf->st_size;
printf("%d",size);