#include <stdio.h>

int main() {
    char operacao;
    double M[12][12];
    double resultado = 0.0;
    int elementos = 0;

    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
            if (j > i) { 
                resultado += M[i][j];
                elementos++;
            }
        }
    }

    if (operacao == 'M') {
        resultado /= elementos;
    }

    printf("%.1lf\n", resultado);

    return 0;
}
