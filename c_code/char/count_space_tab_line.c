#include <stdio.h>

int main(void) {
  int c;
  double n_space = 0, n_tab = 0, line_n = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++line_n;
    else if (c == '\t')
      ++n_tab;
    else if (c == ' ')
      ++n_space;

  printf("%.0f\n", n_space);
  printf("%.0f\n", n_tab);
  printf("%.0f\n", line_n);
  return 0;
}
