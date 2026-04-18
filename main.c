#include <stdio.h>

int main(void) {
  int lenght[7];
  int c;
  int len = 0;
  for (int i = 0; i < 7; i++) {
    lenght[i] = 0;
  }
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      // 防止一开始就是空字符
      if (len != 0) ++lenght[len - 1];
      len = 0;
    } else {
      ++len;
    }
  }

  for (int i = 0; i < 7; i++) {
    printf("%d: ", i + 1);
    for (int j = 0; j < lenght[i]; j++) {
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}