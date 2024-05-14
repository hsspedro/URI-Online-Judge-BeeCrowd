#include <stdio.h>

int main() {
    float A, B, C, AUX;
    scanf("%f %f %f", &A, &B, &C);

    if (A < B){
      AUX = A;
      A = B;
      B = AUX;
    }
    if (A < C){
      AUX = A;
      A = C;
      C = AUX;
    }
    if(B < C){
      AUX = B;
      B = C;
      C = AUX;
    }

    
    
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    }
   else {
        if (A * A == B * B + C * C) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (A * A > B * B + C * C) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A * A < B * B + C * C) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}