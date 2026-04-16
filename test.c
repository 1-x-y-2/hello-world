#include <stdio.h>

int main() {
    int mm, dd, yy;
    scanf("%d/%d/%d", &mm, &dd, &yy);
    int mm_min, dd_min, yy_min;
    mm_min = mm, dd_min = dd, yy_min = yy;
    while (1) {
        scanf("%d/%d/%d", &mm, &dd, &yy);
        if (mm == 0 && dd == 0 && yy == 0)
            break;
        if (yy < yy_min) {
            yy_min = yy;
            mm_min = mm;
            dd_min = dd;
        } else if (yy == yy_min) {
            if (mm < mm_min) {
                mm_min = mm;
                dd_min = dd;
            } else if (mm == mm_min) {
                if (dd < dd_min) {
                    dd_min = dd;
                }
            }
        }
    }
    printf("%d/%d/%02d\n", mm_min, dd_min, yy_min);
    return 0;
}
