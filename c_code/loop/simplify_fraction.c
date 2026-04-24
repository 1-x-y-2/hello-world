#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d/%d", &a, &b);
	int z, m;
	z = a;
	m = b;
	int d;
	while (b > 0) {
		d = a % b;
		a = b;
		b = d;
	}
	z /= a;
	m /= a;
	printf("%d/%d\n", z, m);
	return 0;
}
