#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	double z = 2.0;
	double m = 1.0;
	double sum = 0.0;
	double temp;
     

	for (int i = 0; i < n; i++) {
		sum += z / m;
		temp = z;
		z = z + m;
		m = temp;
	}

	printf("%.2f\n", sum);
	return 0;
}
