#include <stdio.h>

void vencedor(int a, int b){
  
  int r, d, c;
  
  r = ((3*a)*(3*a))+ b*b;
  
  d = 2*a*a + ((5*b)*(5*b));
  
  c = -100*a + b*b*b;

  if(r > d && r > c){
    printf("Rafael ganhou\n");
  }
  else if(d > r && d > c){
    printf("Beto ganhou\n");
  }
  else{
    printf("Carlos ganhou\n");
  }
}

int main() {
  int N, X, Y, maior;

  scanf("%d", &N);

  for(int i=0; i<N; i++){
    scanf("%d %d", &X, &Y);
    
    vencedor(X, Y);
    
  }
    
    return 0;
}