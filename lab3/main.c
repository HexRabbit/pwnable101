#include <stdio.h>
#include <stdlib.h>

void vuln() {
  system("/bin/sh");
}

int main() {
  setbuf(stdout, NULL);
  char s[256];
  puts("Echo service -- repeat like a dumb");
  while(1) {
    printf("> ");
    scanf("%s", s);
    printf(s);
    puts("");
  }
}
