
#include <stdio.h>

int lower(int c) {
  return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}

int main(void) {
  printf("%c\n", lower('C'));
  return 0;
}
