#include <stdio.h>

int main(void) {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      // 计算字符相对于 '0' 的偏移量，作为数组索引并累加计数 (例如 '3' - '0' =
      // 3)
      ++ndigit[c - '0'];
    } else if (c == ' ' || c == '\n' || c == '\t') {
      ++nwhite;
    } else {
      ++nother;
    }
  }

  printf("digits =");
  for (int i = 0; i < 10; ++i) {
    printf(" %d", ndigit[i]);
  }

  printf(", white space = %d, other = %d\n", nwhite, nother);

  return 0;
}
