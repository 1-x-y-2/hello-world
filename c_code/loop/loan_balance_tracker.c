#include <stdio.h>

int main() {
    float money;
    scanf("%f", &money);
    float rate;
    scanf("%f", &rate);
    float back_money;
    scanf("%f", &back_money);
    int count = 0;
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        money = money - back_money + money * rate * .01f / 12.0f;
        printf("%.2f\n", money);
    }
    return 0;
}
