#include <stdio.h>

int main(void){
  int G,A,M,C,i,j,k, maior, aux, num;
  scanf("%d %d %d %d", &G, &A, &M, &C);
  int coluna_max[C];
  
  int matriz[G][A];
  int seconmatriz[A][M];
  int tercmatriz[M][C];
  
  int quartmatriz[G][M];

  int total[G][C];
  
  for (int i = 0; i < G; i++) {
      for (int j = 0; j < A; j++) {
          scanf("%d", &matriz[i][j]);
        }
    }

  for (int i = 0; i < A; i++) {
      for (int j = 0; j < M; j++) {
          scanf("%d", &seconmatriz[i][j]);
        }
    }

  for (int i = 0; i < M; i++) {
      for (int j = 0; j < C; j++) {
          scanf("%d", &tercmatriz[i][j]);
        }
    }


  for(i=0; i<G; i++){
    for(j=0; j<M; j++){
      quartmatriz[i][j] = 0;
      for(k=0; k<A; k++){
        quartmatriz[i][j] += matriz[i][k] * seconmatriz[k][j];
        
      }
    }
  }

  for(i=0; i<G; i++){
    for(j=0;j<C; j++){
      total[i][j] = 0;
      for(k=0; k<M; k++){
        total[i][j] += quartmatriz[i][k] * tercmatriz[k][j];
      }
    }
  }
for (j = 0; j < C; j++){
  coluna_max[j] = total[0][j];
  for (i = 1; i < G; i++) {
    if (total[i][j] > coluna_max[j]) {
      coluna_max[j] = total[i][j];
                }
            }
        }
    for (i = 0; i < G; i++) {
        for (j = 0; j < C; j++) {
            int tamanho = 0;
            int coluna = coluna_max[j];
            while(coluna != 0){
                tamanho++;
                coluna /= 10;
            }
            printf("%*d", tamanho, total[i][j]);
            if(j < C-1){
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }
    return 0;
}