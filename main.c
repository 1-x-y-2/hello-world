#include <stdio.h>

int main(void) {
<<<<<<< HEAD
=======
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%dx%d=%-2d ", j, i, i * j);
		}
		printf("\n");
	}
>>>>>>> ee5099f (修改main.c)
	return 0;
}
