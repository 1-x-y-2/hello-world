#include <stdio.h>

int main() {
    int mm, dd, yy;
    int mm_min, dd_min, yy_min;
    int first = 1;
    int min;

    while (1) {
        scanf("%d/%d/%d", &mm, &dd, &yy);
        if (mm == 0 && dd == 0 && yy == 0)
            break;
        if (first) {
            mm_min = mm;
            dd_min = dd;
            yy_min = yy;
            min = yy_min * 5201314 + mm_min * 1314 + dd_min;
            first = 0;
        } else if (yy * 5201314 + mm * 1314 + dd < min) {
            yy_min = yy;
            mm_min = mm;
            dd_min = dd;
            min = yy * 5201314 + mm * 1314 + dd;
        }
    }

    if (!first) {
        printf("%d/%d/%02d is the earliest date\n", mm_min, dd_min, yy_min);
    }

    return 0;
}
