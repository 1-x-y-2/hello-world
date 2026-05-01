#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d", &n);

  double *arr = (double*)malloc(n * sizeof(double));
  if (arr == NULL) {
    fprintf(stderr, "fail\n");
    return 1;
  }
  
  for (int i = 0; i < n; i++) {
    arr[i] = i * 1.1;
  }

  for (int i = 0; i < n; i++) {
    printf("%.1f ", arr[i]);
  }
  printf("\n");

  free(arr);
  arr = NULL;

  return 0;
}