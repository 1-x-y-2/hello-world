#include <stdio.h>

int main(void) {
    int c;
    int flag = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++flag;
        } else {
            flag = 0;
        }
        if (flag < 2) {
            putchar(c);
        }
    }

    return 0;
}
