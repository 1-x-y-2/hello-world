#include <stdio.h>

int main() {
    int mm, dd, yy;
    int mm_min, dd_min, yy_min;
    int first = 1;

    while (1) {
        scanf("%d/%d/%d", &mm, &dd, &yy);
        if (mm == 0 && dd == 0 && yy == 0)
            break;
        if (first) {
            mm_min = mm;
            dd_min = dd;
            yy_min = yy;
            first = 0;
        } else if (yy < yy_min || (yy == yy_min && mm < mm_min) || ((yy_min == yy && mm_min == mm) && dd < dd_min)) {
            yy_min = yy;
            mm_min = mm;
            dd_min = dd;
        }
    }

    if (!first) {
        printf("%d/%d/%02d is the earliest date\n", mm_min, dd_min, yy_min);
    }

    return 0;
}
