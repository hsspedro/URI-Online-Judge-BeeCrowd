#include <stdio.h>
#include <string.h>

int main() {
    int N, K;
    scanf("%d", &N);
    while(N--){
        
        scanf("%d", &K);
        char linguage[K][21];
        
        for(int i = 0; i < K; i++){
            scanf("%s", linguage[i]);    
        }
        int i = 1;
        int aux = 0;
        while(i < K){
            if(strcmp(linguage[0], linguage[i]) != 0){
                aux = 1;
                break;
            }
            i++;
        }
        if(aux == 1){
            printf("ingles\n");
        }
        else{
            printf("%s\n", linguage[0]);
        }
    }
    
    return 0;
}
