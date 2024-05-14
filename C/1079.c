#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
  
    for(int i = 0; i < N; i++){
        
        float X, Y, Z;
        
        scanf("%f %f %f", &X, &Y, &Z);
        
        X *= 2.0;
        Y *= 3.0;
        Z *= 5.0;
        float resultado = (X + Y + Z)/10;
        
        printf("%.1f\n", resultado);
    }
    
    return 0;
}
