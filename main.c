#include <stdio.h>

int main(void) {
	int m, n;
	scanf("%d %d", &m, &n);
	int cnt = 0, sum = 0;

	for (int i = m; i <= n; i++) {
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				sum += i;
				++cnt;
			}
		}
	}

	printf("%d %d\n", cnt, sum);
	return 0;
}
