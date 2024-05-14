#include <stdio.h>

int horasdormida(int a, int b, int c , int d){
    int horadormir, horaacordar, dormir;
  
    horadormir = a * 60 + b;
    horaacordar = c * 60 + d;

    dormir = horaacordar - horadormir;
    
    if(dormir <= 0){
      dormir += 24 * 60;
    }
    return dormir;
}
int main(void){
  int h1, m1, h2, m2, dormir;

  while(1){
  
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
      break;
    }
    
    dormir = horasdormida(h1, m1, h2, m2);
    
    printf("%d\n", dormir);
  }


  return 0;
}