#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void menu() {
  puts("###########################################");
  puts("# ID saver - save your ID and do nothing! #");
  puts("#                                         #");
  puts("# 1. Save your awesome ID                 #");
  puts("# 2. View your awesome ID                 #");
  puts("# 3. Exit                                 #");
  puts("###########################################");
  printf(">> ");
}

void init() {
  setvbuf(stdin,NULL,_IONBF,0);
  setvbuf(stdout,NULL,_IONBF,0);
}

void service() {
  char name[10][8];

  while(1) {
    menu();

    int n;
    int idx;

    scanf("%d", &n);

    if (n == 1) {
      printf("Choose which index (0-9) to save: ");
      scanf("%d%*c", &idx);
      printf("Enter your id: ");
      //scanf("%s", name[idx]);
      int len = read(0, name[idx], 0x100);
      name[idx][len] = '\0';
      //gets(name[idx]);
      printf("Your id have been saved in index %d.\n", idx);
    }
    else if (n == 2) {
      printf("Choose which index (0-9) to view: ");
      scanf("%d", &idx);
      printf("Here's your awesome id: %s\n", name[idx]);
    }
    else if (n == 3) {
      puts("Bye~");
      break;
    }
    else {
      puts("Not supported.");
    }
  }
}

int main()
{
  init();
  service();

  return 0;
}
