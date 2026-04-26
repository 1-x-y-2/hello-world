#include <stdio.h>

int exist(int n, int ns[], int len);

int main() {
  int ns[] = {1, 2, 3, 4, 5, 6};
  int len = sizeof(ns) / sizeof(ns[0]);
  int n;
  scanf("%d", &n);
  int ans = exist(n, ns, len);
  if (ans == -1) 
    printf("No\n");
  else 
    printf("%d\n", ans);
  return 0;

}

int exist(int n, int ns[], int len) {
  for (int i = 0; i < len; i++) {
    if (ns[i] == n)
      return i;
  }
  return -1;
}
