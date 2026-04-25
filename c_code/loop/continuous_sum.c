#include <stdio.h>

int main(void) {
	int a, n;
	scanf("%d  %d", &a, &n);
	int p = 0;
	long sum = 0;

	for (int i = 0; i < n; i++) {
		p = 10 * p + a;	
		sum += p;
	}
	printf("%ld\n", sum);
}