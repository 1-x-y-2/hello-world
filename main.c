#include <stdio.h>

int exist(char c, char s[]) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (c == s[i]) {
      return 1;
    }
  }
  return 0;
}

int any(char s1[], char s2[]) {
  for (int i = 0; s1[i] != '\0'; i++) {
  }
  return -1;
}

int main() {
  char s1[] = "Hello World";
  char s2[] = "eH";

  return 0;
}
