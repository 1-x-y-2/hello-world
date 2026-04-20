#include <stdio.h>

void show(int lower, int upper, int step);
int main(void) {
  show(0, 300, 20);
  return 0;
}

void show(int lower, int upper, int step) {
  int fahr, celsius;
  fahr = lower;

  for (; fahr <= upper; fahr += step) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
  }
}
