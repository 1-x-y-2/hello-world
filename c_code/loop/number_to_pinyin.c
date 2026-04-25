#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n < 0) {
		printf("fu ");
		n = -n;
	}


	int temp = n;
	int d;
	int p = 1;

	while (n > 9) {
		n /= 10;
		p *= 10;
	}

	while (p > 0) {
		d = temp / p % 10;
		switch (d) {
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
		if (p > 9) 
			printf(" ");
		p /= 10;
	}
	return 0;
}
