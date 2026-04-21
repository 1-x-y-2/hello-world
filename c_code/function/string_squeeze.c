#include <stdio.h>

void squeeze(char s[], int c) {
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++) {
    if (s[i] != c) {
      s[j++] = s[i];
    }
  }
  s[j] = '\0';
}

int main(void) {
  char s[] = {'a', 'b', 'c', '\0'};
  char c = 'a';

  squeeze(s, c);

  for (int i = 0; s[i] != '\0'; i++) {
    printf("%c ", s[i]);
  }

  return 0;
}
