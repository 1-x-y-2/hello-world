
#include <stdio.h>

int lower(int c) {
  if (c >= 'A' && c <= 'Z') {
    return c + 'a' - 'A';
  } else {
    return c;
  }
}

int main(void) {
  printf("%c\n", lower('A'));
  return 0;
}
