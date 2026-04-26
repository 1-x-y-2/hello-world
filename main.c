#include <stdio.h>

int main() {
  const int LEN = 5;
  int ns[LEN];
  int n;
  // scanf("%d", n);
  int flag = 0;

  for (int i = 0; i < LEN; i++) {
    if (ns[i] == n)
      flag = 1;
  }
  if (flag) 
    printf("Yes\n");
  else 
    printf("No\n");
  return 0;

}
