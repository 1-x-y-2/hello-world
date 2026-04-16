#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long factorial = 1;
    double get_e = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        get_e = get_e + 1.0 / (double) factorial;
    }

    printf("%f", get_e);
    return 0;
}
