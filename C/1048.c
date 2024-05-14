#include <stdio.h>

int main() {
    double X, Y, Z;
    int perce;

    scanf("%lf", &X);

    if (X <= 400.00) {
        perce = 15;
    } else if (X <= 800.00) {
        perce = 12;
    } else if (X <= 1200.00) {
        perce = 10;
    } else if (X <= 2000.00) {
        perce = 7;
    } else {
        perce = 4;
    }

    Z = X * (perce / 100.0);
    Y = X + Z;

    printf("Novo salario: %.2lf\n", Y);
    printf("Reajuste ganho: %.2lf\n", Z);
    printf("Em percentual: %d %%\n", perce);

    return 0;
}
