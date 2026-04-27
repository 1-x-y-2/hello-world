#include <stdio.h>

int main() {
  int n = 25;
  int prime[n];

  for (int i = 0; i < n; i++) {
    prime[i] = 1;
  }

  for (int x = 2; x < n; x++) {
    if (prime[x]) {
      for (int i = 2; x * i < n; i++) {
        prime[x * i] = 0;
      }
    }
  }
  for (int i = 2; i < n; i++) {
    if (prime[i])
      printf("%d\t", i);
  }
  printf("\n");
  return 0;
}