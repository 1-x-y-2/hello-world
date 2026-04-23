#include <stdio.h>

int main(void) {
	int num;
	int start;
	int end;
	scanf("%d", &num);

	if (num == 3) {
		start = 100;
		end = 999;
	} else if (num == 4) {
		start = 1000;
		end = 9999;
	} else if (num == 5) {
		start = 10000;
		end = 99999;
	} else if (num == 6) {
		start = 100000;
		end = 999999;
	} else if (num == 7) {
		start = 1000000;
		end = 9999999;
	} else {
		return 1;
	}

	int i_, j_, k_, l_, m_, n_, o_;
	int i, j, k, l, m, n, o;
	int sum;

	for (int _ = start; _ <= end; _++) {
		i_ =  j_ =  k_ =  l_ =  m_ =  n_ =  o_ = 1;
		i = _ % 10;
		j = _ / 10 % 10;
		k = _ /100 % 10;
		l = _ / 1000 % 10;
		m = _ / 10000 % 10;
		n = _ / 100000 % 10;
		o = _ / 1000000 % 10;
		for (int temp = 0; temp < num; temp++) {
			i_ *= i;
			j_ *= j;
			k_ *= k;
			l_ *= l;
			m_ *= m;
			n_ *= n;
			o_ *= o;
		}
		sum = i_ + j_ + k_ + l_ + m_ + n_ + o_;
		if (sum == _) {
			printf("%d\n", _);
		}
	}
	return 0;
}
