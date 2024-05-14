#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char valor;
    struct Node *prox;
} Node;

void push(Node **head, char valor);
int tamanhoPilha(Node *head);
void zerarLista(Node **head);

int main(){
    int P;
    Node *head = NULL;
    char D[1000];
    

    scanf("%d", &P);
    int respostas[P];

    for(int i = 0; i < P; i++){
        scanf("%s", D);
        int diamante = 0;
        for(int j = 0; D[j] != '\0'; j++){
            if(D[j] == '<'){
                diamante++;
            } 
            else if(D[j] == '>' && diamante > 0){
                diamante--;
                push(&head, 'x');
            }
        }
        respostas[i] = tamanhoPilha(head);
        zerarLista(&head);
    }
  for (int i = 0; i < P; i++) {
      printf("%d\n", respostas[i]);
  }
    return 0;
}

void push(Node **head, char valor) {
    Node *novo = (Node *)malloc(sizeof(Node));
    if (novo != NULL) {
        novo->valor = valor;
        novo->prox = *head;
        *head = novo;
    }
}

void zerarLista(Node **head) {
    Node *atual = *head;
    while (atual != NULL) {
        Node *temp = atual;
        atual = atual->prox;
        free(temp);
    }
    *head = NULL;
}

int tamanhoPilha(Node *head){  
    int cont = 0;
    while(head !=NULL){
        cont++;
        head= head->prox;
    }       
    return cont;
}
