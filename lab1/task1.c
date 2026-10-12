#include <stdio.h>

int main(void) {
    double x;
    double y;
    int is_defined = 1;

    printf("Введіть значення x: ");
    scanf("%lf",&x);

    if (x >= -49) {
        if (x < -10) {
            y = 10.0 * x * x * x + (7.0 * x) / 5.0 + 2.0;
        }
        else{
            if (x > 0) {
                if (x <= 10) {
                    y = 10.0 * x * x * x + (7.0 * x) / 5.0 + 2.0;
                }
                else {
                    if (x > 20) {
                        y = -x + 9;
                    }
                    else {
                        is_defined = 0;
                    }
                }
            }
            else {
            is_defined = 0;
            }
        }
    }
    else {
    is_defined = 0;
    }
    if (is_defined == 1) {
        printf("Значення y: %lf", y);
    }
    else {
        printf("Функція не визначена");
    }
    return 0;
}
