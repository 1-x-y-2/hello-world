#include <stdio.h>

int main(void) {
	int m, n;
	scanf("%d %d", &m, &n);
	int cnt = 0, sum = 0;
	int flag;

	for (int i = m; i <= n; i++) {
		flag = 0;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}
		if ((!flag) && i != 1) {
			++cnt;
			sum += i;
		}
	}

	printf("%d %d\n", cnt, sum);
	return 0;
}
