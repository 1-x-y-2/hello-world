#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
  int c;
  int flag = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (flag == IN)
        putchar('\n');
      flag = OUT;
    } else
      flag = IN;

    if (flag)
      putchar(c);
  }

  return 0;
}