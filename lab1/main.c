#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void vuln()
{
  system("/bin/cat flag");
}

int main()
{
  char lastword[20];
  puts("Get the flag plz :)");
  scanf("%s", lastword);
  return 0;
}
