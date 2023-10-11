#include <stdio.h>

int main(int ac,char **av)

{
  int ret;
  char small_buffer [16];
  int useless;
  char big_buffer [66];
  FILE *fd;
  
  fd = fopen("/home/user/end/.pass","r");

  bzero(small_buffer, 16);

  if ((fd == NULL) || (ac != 2)) {
    return -1;
  }
  
    fread(small_buffer, 1, 66, fd);
    useless = 0;
    ret = atoi(av[1]);
    *(small_buffer + ret) = 0;
    fread(big_buffer, 1, 65, fd);
    fclose(fd);
    ret = strcmp(small_buffer,av[1]);
    if (ret == 0) {
        execl("/bin/sh","sh",0);
    }
    else {
        puts(big_buffer);
    }
    ret = 0;

  return ret;
}