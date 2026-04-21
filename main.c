#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  int count = 0;
  int end = a + 3;
  for (int i = a; i <= end; i++) {
    for (int j = a; j <= end; j++) {
      for (int k = a; k <= end; k++) {
        if (i != j && i != k && j != k) {
          count++;
          printf("%d%c", i * 100 + j * 10 + k, (count % 6 == 0 ? '\n' : ' '));
        }
      }
    }
  }
  return 0;
}