#include <stdio.h>
int main() {
  int target = 0;
  char vuln[0x10];

  scanf("%s", vuln);

  if(target)
    puts("Hello pwn");
  else
    puts("You can try again");

  return 0;
}
