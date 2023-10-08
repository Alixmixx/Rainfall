#include <stdio.h>
void p(void)
{
  unsigned int ret;
  char buffer [76];
  
  fflush(stdout);
  gets(buffer);
  if ((ret & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n",ret);
    _exit(1);
  }
  puts(buffer);
  strdup(buffer);
  return;
}

void main(void)
{
  p();
  return;
}