#include <stdio.h>

int lower(char c) {
  if (c >= 'A' && c <= 'F') {
    return c + 'a' - 'A';
  } else {
    return c;
  }
}

long add_two_num(char c, long n) {
  int d = (int)(c - 'a' + 10);
  int g = d % 10;
  int s = d / 10;
  n = 10 * n + s;
  n = 10 * n + g;
  return n;
}

long htoi(char s[]) {
  long n = 0;
  int i = 0;
  if (s[i] == '0' && (s[i + 1] == 'x' || s[i + 1] == 'X')) {
    printf("%c%c", s[0], s[1]);
    i = 2;
  }
  for (; s[i] != '\0'; ++i) {
    if (s[i] >= 'a' && s[i] <= 'f' || s[i] >= 'A' && s[i] <= 'F') {
      s[i] = (char)lower(s[i]);
      n = add_two_num(s[i], n);
    } else if (s[i] >= '0' && s[i] <= '9') {
      n = 10 * n + (int)(s[i] - '0');
    }
  }
  return n;
}

int main(void) {
  char s[] = {'1', '0', '2', '3', '\0'};
  printf("%ld\n", htoi(s));
  return 0;
}
