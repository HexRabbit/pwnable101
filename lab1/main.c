#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void vuln()
{
  system("/bin/cat flag");
}

void init() {
  setbuf(stdout, NULL);
}

int main()
{
  init();
  char lastword[20];
  puts("Get the flag plz :)");
  scanf("%s", lastword);
  return 0;
}
