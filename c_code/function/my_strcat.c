#include <stdio.h>

void my_strcat(char s[], char t[]) {
  int i, j;
  i = j = 0;
  while (s[i] != '\0') {
    i++;
  }
  while ((s[i++] = t[j++]) != '\0')
    ;
}

void show(char s[]) {
  for (int i = 0; s[i] != '\0'; i++) {
    printf("%c", s[i]);
  }
}

int main(void) {
  char s[20] = "book";
  char c[] = "store";
  my_strcat(s, c);
  show(s);
  return 0;
}
