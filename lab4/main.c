#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
int n = 0;

void menu()
{
  puts("########################");
  puts("#    Simple notebook   #");
  puts("#                      #");
  puts("#  1. write some note  #");
  puts("#  2. view your note   #");
  puts("#  3. exit             #");
  puts("########################");
}

void nope() {
  system("echo NOPE");
}

void init() {
  setbuf(stdout, NULL);
}

int main()
{
  init();
  int num;
  char msg[5][16]; // rbp-0x60
  memset(msg, 0, sizeof(msg));
  menu();
  while(1) {
    printf("> ");
    scanf("%d", &num);
    switch(num)
    {
      case 1: {
        int n;
        printf("Choose page to write: ");
        scanf("%d", &n);
        if (n < 0 || n > 4) {
          puts("Suddenly, your pen vanished LOL");
          exit(-1);
        }
        printf("input> ");
        read(0, msg[n], 100);
        printf("Saved: %s", msg[n]);
        break;
      }

      case 2:
        puts("Not implemented");
        break;

      case 3:
        puts("Bye :)");
        return 0;
    }
  }
}
