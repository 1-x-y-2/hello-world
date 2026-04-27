#include <stdio.h>

int judge(int n);
int main() {
  int g[3][3];
  int n;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &n);
      g[i][j] = n;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", g[i][j]);
    }
    printf("\n");
  }

  int x = 0;
  int y = 0;
  int z = 0;
  int f = 0;
  int flag = 0;
  for (int i = 0, e = 2; i < 3; i++, e--) {
    z += g[i][i];
    f += g[i][e];
    for (int j = 0; j < 3; j++) {      
      x += g[i][j];
      y += g[j][i];
    }
    if (judge(x) || judge(y)) {
      flag = 1;
      break;
    }
    x = 0;
    y = 0;
  }
  if (flag != 1 && (judge(z) || judge(f)))
    ;
  return 0;
}

int judge(int n) {
  if (n == 3) {
    printf("X");
    return 1;
  } else if (n == 0) {
    printf("O");
    return 1;
  } else {
    return 0;
  }
}