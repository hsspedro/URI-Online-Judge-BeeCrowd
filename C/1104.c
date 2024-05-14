#include <stdio.h>
int resultado(int a, int b, int vetor[a], int Vetor[b] );

int main() {
  int A, B;
  
  while (1) {
    scanf("%d %d", &A, &B);
  
    if (!A && !B) break;
  
    int alice[A], beatriz[B];
    int vetorAlice[A], vetorBeatriz[B];
  
    for (int i = 0; i < A; i++) {
        scanf("%d", &alice[i]);
    }
    
    for (int i = 0; i < B; i++){
      scanf("%d", &beatriz[i]);
    }
    
    int contadorUnico = 0;
  
    for (int i = 0; i < A; i++) {
      int repetido = 0;
      for (int j = 0; j < contadorUnico; j++) {
        if (alice[i] == vetorAlice[j]) {
          repetido = 1;
          break;
        }
      }
      if (!repetido) {
        vetorAlice[contadorUnico++] = alice[i];
      }
    }

    int contadorunico = 0;

    for(int i = 0; i < B; i++){
      int repetido = 0;
      for(int j = 0; j < contadorunico; j++){
        if(beatriz[i] == vetorBeatriz[j]){
          repetido = 1;
          break;
        }
      }
      if(!repetido){
        vetorBeatriz[contadorunico++] = beatriz[i];
      }
    }
    
    int total = resultado(contadorUnico, contadorunico, vetorAlice, vetorBeatriz);
    printf("%d\n", total);
  }
  
return 0;
}
int resultado(int a, int b, int vetor[a], int Vetor[b]){
  int cont = 0;
  
    for(int i = 0; i < a; i++){
      for(int j = 0; j < b; j++){
        if(vetor[i] == Vetor[j]){
          cont++;
        }
      }
    }
  if ((a - cont) < (b - cont)){
    return a - cont;
  }
  else{
    return b - cont;
  }
}