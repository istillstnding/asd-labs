#include <stdio.h>

int main(void) {
    double x;
    double y;
    int is_defined = 1;

    printf("Введіть значення  x: ");
    scanf("%lf", &x);

    if ((x >= -49.0 && x < -10.0) || (x > 0.0 && x <= 10.0 )) {
        y = 10.0 * x * x * x + (7.0 * x) / 5.0 + 2.0;
    }
    else if (x > 20.0) {
        y = -x + 9;
    }
    else {
        is_defined = 0;
        printf("Функція не визначена\n");
    }
    if (is_defined) {
        printf("Значення у: %lf\n", y);
    }
    return 0;
}