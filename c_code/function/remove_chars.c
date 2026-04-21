#include <stdio.h>

int judge(char c, char s[]) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c)
      return 0;
  }
  return 1;
}

void my_squeeze(char s1[], char s2[]) {
  int i, j;
  for (i = j = 0; s1[i] != '\0'; i++) {
    if (judge(s1[i], s2)) {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}

void show(char s[]) {
  for (int i = 0; s[i] != '\0'; i++) {
    printf("%c", s[i]);
  }
}

int main(void) {
  char s1[] = "abcdefg";
  char s2[] = "fg";

  my_squeeze(s1, s2);
  show(s1);
  return 0;
}
