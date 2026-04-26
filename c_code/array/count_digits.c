#include <stdio.h>

int main(void) {
  const int NUM = 10;
  int cnt[NUM];
  for (int i = 0; i < NUM; i++) {
    cnt[i] = 0;
  }
  int n;
  while (1) {
    scanf("%d", &n);
    if (n == -1)
      break;
    cnt[n]++;
  }

  for (int i = 0; i < NUM; i++) {
    printf("%d\n", cnt[i]);
  }
  return 0;
}