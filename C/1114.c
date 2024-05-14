#include <stdio.h>

int main(void){
  int X;
  
  while (1){

    scanf("%d", &X);
    
    if (X == 2002){
      printf("Acesso Permitido\n");
      break;
    }
    else {
      printf("Senha Invalida\n");
    }
    
  }


  return 0;
}
