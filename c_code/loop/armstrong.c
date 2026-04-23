#include <stdio.h>

int main(void) {
	int n;
	int first = 1;
	int end;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		first *= 10;
	}

	end = first * 10;
	int sum;
	int t, p, d;

	for (int i = first; i < end; i++) {
		sum = 0;
		t = i;
		while (t > 0) {
			p = 1;
			d = t % 10;
			for (int j = 0; j < n; j++) {
				p *= d;
			}
			t /= 10;
			sum += p;
		}
		if (sum == i) {
			printf("%d\n", i);
		}
	}
	return 0;
}
