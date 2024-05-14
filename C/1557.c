#include <stdio.h>
#include <math.h>

int main(void){
  int N,i,j;
  
  
  while(1){
    
    scanf("%d",&N);
    
    if(N == 0){
      break;
    }
    
    int matriz[N][N];
    int maior = 1;
    
    for(i=0; i<N; i++){
      for(j=0; j<N; j++){
        maior = pow(2,(i + j));
        matriz[i][j] = maior;
      }
    }
    
    int T = 1;

    while(1){
     if(maior > 9){
       maior /= 10;
       T++;
     }
      else{
        break;
      }
    }
    

    for(i=0; i<N; i++){
      for(j=0; j<N; j++){
        printf("%*d", T, matriz[i][j]);
        if(j < N - 1){
          printf(" ");
        }
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}