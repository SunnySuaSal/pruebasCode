#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int dato;
  struct Node *sig;
} Node;

typedef struct{
  Node *cabeza;
} Lista;

void inicializaLista(Lista *lista){
    lista->cabeza = NULL;
}

int push(Lista *lista, int dato){
  Node *nuevo = (Node *)malloc(sizeof(Node));
  if(nuevo==NULL){
    printf("Error al alocar memoria para nuevo\n");
    exit(1);
  }
  nuevo->dato = dato;
  nuevo->sig = NULL;
  if(lista->cabeza == NULL){ //esta vacia
    lista->cabeza = nuevo;
  }else{ //tiene almenos un elemento
    Node *aux = lista->cabeza;
    while(aux->sig != NULL){
      aux = aux->sig;
    }//acabando este while, aux apunta al ultimo
    aux->sig=nuevo;
    return 1;
  }
  return 0; //por alguna razon no lo agrego
}

int pop(Lista *lista){
  if(lista->cabeza == NULL){ //esta vacia, nada que popear
    printf("La lista ya esta vacia\n");
    return 0;
  }
  if(lista->cabeza->sig==NULL){ //la lista tiene un solo elemento
    free(lista->cabeza);
    lista->cabeza = NULL;
    return 1;
  }
  Node *aux = lista->cabeza;
  Node *previo = aux;
  while(aux->sig != NULL){ //recorremos la lista para llegar al ultimo
    previo=aux;
    aux=aux->sig;
  }
  previo->sig=NULL;
  free(aux);
  return 1;
}

void imprimirLista(Lista lista){
  Node *aux = lista.cabeza;
  while(aux != NULL){
    printf("%d ", aux->dato);
    aux=aux->sig;
  }
  printf("\n");
}

int main(){
  Lista lista;
  inicializaLista(&lista);
  push(&lista, 1);
  push(&lista, 2);
  push(&lista, 3);
  push(&lista, 4);
  push(&lista, 5);
  push(&lista, 6);

  pop(&lista);
  pop(&lista);

  imprimirLista(lista);

  return 0;
}
