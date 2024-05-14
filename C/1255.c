#include <stdio.h>
#include <ctype.h>

void minusculo(char str[201]);

int main(void) {
    int N;
    scanf("%d", &N);
    char str[201];
    
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    int quantidade[26] = {0};
    
    for (int l = 0; l < N; l++) {
        scanf(" %200[^\n]", str);
        minusculo(str);
        
        int i = 0;
        
        for (int j = 0; j < 26; j++) {
            int cont = 0;
            for (int h = 0; str[h] != '\0'; h++) {
                if (alfabeto[j] == str[h]) {
                    cont += 1;
                }
            }
            quantidade[j] = cont;
        }
        
      int frequenciaMaxima = quantidade[0];
      
      for (int i = 1; i < 26; i++) {
          if (quantidade[i] > frequenciaMaxima) {
              frequenciaMaxima = quantidade[i];
          }
      }
      
      for (int i = 0; i < 26; i++) {
          if (quantidade[i] == frequenciaMaxima) {
              printf("%c", alfabeto[i]);
          }
      }
      
      printf("\n");
    }
    
    
    return 0;
}

void minusculo(char str[201]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}
