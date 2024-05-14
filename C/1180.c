#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    int X[N];
    
    for(int i = 0; i < N; i++){
        scanf("%d", &X[i]);
    }
    int menor = X[0];
    int posi = 0;
    for(int i = 0; i < N; i++){
        if(X[i] < menor){
            menor = X[i];
            posi = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posi);
    
    return 0;
}
