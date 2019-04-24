#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char crab[0x100];

int main()
{
  setvbuf(stdout,NULL,_IONBF,1024);
  puts("Give me some crab");
  read(0, crab, 0x100);
  ((void (*)())crab)();
  return 0;
}
