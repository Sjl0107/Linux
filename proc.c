#include"proc.h"

void proc()
{
  char bar[NUM];
  memset(bar,'\0',sizeof(bar));
  const char *label = "|/-\\";
  int i = 0;
  while(i < 100)
  {
    fflush(stdout);
    bar[i++]='#';
    usleep(30000);
    printf("[%-100s][%3d%][%c]\r",bar,i,label[i%4]);
  }
  printf("\n");

}
