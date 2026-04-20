#include <stdio.h>

int atoi(char s[]) {
  int i, n;

  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10 * n + (s[i] - '0');
  }

  return n;
}
int main(void) {
  char s[] = {'1', '2', '3', '4', '5'};
  printf("%d\n", atoi(s));
  return 0;
}
