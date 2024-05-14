#include <stdio.h>
 
int main() {
 
    int Array[100];
    int maior = 0;
    int position = 0;
  
    for(int i = 0; i < 100; i++){
        
        scanf("%d", &Array[i]);
        
        if(Array[i] > maior){
            maior = Array[i];
            position = i+1;
        }
        
    }
  
    printf("%d\n%d\n", maior, position);
    return 0;
}
