#include <stdio.h>

int main(void) {
  int c;
  int digit[10];
  int capital_letter[26];
  int small_letter[26];
  int space_character = 0;
  int other = 0;

  for (int i = 0; i < 10; i++) {
    digit[i] = 0;
  }

  for (int i = 0; i < 26; i++) {
    capital_letter[i] = small_letter[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++digit[c - '0'];
    } else if (c >= 'A' && c <= 'Z') {
      ++capital_letter[c - 'A'];
    } else if (c >= 'a' && c <= 'z') {
      ++small_letter[c - 'a'];
    } else if (c == ' ' || c == '\n' || c == '\t') {
      ++space_character;
    } else {
      ++other;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d: ", i);
    for (int j = 0; j < digit[i]; j++) {
      printf("*");
    }
    printf("\n");
  }

  for (int i = 0; i < 26; i++) {
    printf("%c:", 'A' + i);
    for (int j = 0; j < capital_letter[i]; j++) {
      printf("*");
    }
    printf("\n");
  }

  for (int i = 0; i < 26; i++) {
    printf("%c:", 'a' + i);
    for (int j = 0; j < small_letter[i]; j++) {
      printf("*");
    }
    printf("\n");
  }

  printf("space_character:");
  for (int i = 0; i < space_character; i++) {
    printf("*");
  }
  printf("\n");

  printf("other:");
  for (int i = 0; i < other; i++) {
    printf("*");
  }
  printf("\n");

  return 0;
}
