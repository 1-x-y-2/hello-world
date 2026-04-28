#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p = (int*)calloc(10, sizeof(int));
  if (p == NULL)
    exit(1);

  int *tmp = (int*)realloc(p, 20 * sizeof(*p));

  if (tmp != NULL) {
    p = tmp;
  } else {
    exit(1);
  }

  int n = 10;
  int d;

  for (int i = n; i < n + 10; i++) {
    scanf("%d", &d);
    p[i] = d;
    
  }

  for (int i = 0; i < n + 10; i++) {
    printf("%d ", p[i]);
  }

  free(p);
  p = NULL;
  return 0;
}