#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void vuln()
{
  system("/bin/cat flag");
}


void story()
{
  setvbuf(stdout,NULL,_IONBF,1024);
  char lastword[20];
  puts("You're in a spaceship, but somehow the engine is broken, and you're dying,");
  puts("the only one way to escape is to open a wormhole to the earth.");
  printf("So, input the coordinate to the wardrive engine: ");
  read(0,lastword,0x30);
}

int main()
{
  story();
  puts("Spaceship has exploded, no one survived.");
  return 0;
}
