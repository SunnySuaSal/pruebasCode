#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  int numCuenta;
  char *nombre;
  float saldo;
}Cliente;

typedef struct node{
  Cliente cliente;
  struct node *sig;
}Node;

typedef struct{
  Node *cab;
}Lista;

int transacciones(Lista *lista, char op, int nc, char *nombre, float monto){
  Node *aux, *prev;
  aux = lista->cab;
  prev = NULL;

  while(aux!=NULL && aux->cliente.numCuenta < nc){
    prev = aux;
    aux = aux->sig;
  } //Ahora aux es igual o el siguiente a nc


  switch (op) {
    case 'A':
    //dar de alta
    //regresa -1 si ya existe, 1 si la pudo crear
    if(aux != NULL && aux->cliente.numCuenta == nc){
      printf("La cuenta ya existe\n");
      return -1;
    }
    //Ahora si, hora de insertar
    //Hay que crear el node
    Node *nuevo = (Node*)malloc(sizeof(Node));
    if(nuevo==NULL){
      printf("Error al alocar memoria para Node\n");
      exit(1);
    }

    //Inicializa el nodo con los datos de cliente
    nuevo->cliente.numCuenta = nc;
    nuevo->cliente.nombre = (char *)malloc(strlen(nombre) + 1);
    if(nuevo->cliente.nombre == NULL){
      printf("Error al alocar memoria para el nombre\n");
      free(nuevo);
      exit(1);
    }
    strcpy(nuevo->cliente.nombre, nombre);

    nuevo->cliente.saldo = monto;

    nuevo->sig = NULL;

    if(aux==NULL){//la lista esta vacia
      lista->cab = nuevo;
      printf("Cuenta con numCuenta %d insertado correctamente\n", nc);
      return 1;
    }

    if(prev == NULL && aux != NULL){ //la lista tiene un nodo
      nuevo->sig = aux;
      lista->cab = nuevo;
      printf("Cuenta con numCuenta %d insertado correctamente\n", nc);
      return 1;
    }

    if(prev != NULL && aux != NULL){ //la lista tiene mas de un nodo
      nuevo->sig = aux;
      prev->sig = nuevo;
      printf("Cuenta con numCuenta %d insertado correctamente\n", nc);
      return 1;
    }
    break;

    case 'B':
    //dar de baja
    //primero revisamos que el nodo exista
    if(aux == NULL){ //la lista esta vacia
      printf("La lista ya esta vacia\n");
      return -1;
    }
    if(aux != NULL && aux->cliente.numCuenta != nc){
      printf("La cuenta no existe\n");
      return -1;
    }

    //El nodo existe, lo eliminamos de acuerdo a los casos
    //Desconectamos lo apuntadores del nodo, de acuerdo a los casos
    if(prev == NULL){//La lista tiene un nodo
      lista->cab = aux->sig;
    } else {
      prev->sig = aux->sig;
    }

    //Liberamos la memoria del nombre y del nodo
    free(aux->cliente.nombre);
    free(aux);

    printf("Nodo con numCuenta %d eliminado correctamente\n", nc);
    return 1;
    break;

    case 'C':
    //consulta de saldo
    //revisa que la cuenta existe
    if(lista->cab == NULL){//La lista esta vacia
      printf("La lista esta vacia\n");
      return -1;
    }

    if(aux != NULL && aux->cliente.numCuenta != nc){
      printf("La cuenta no existe");
      return -1;
    }

    printf("El saldo es %f \n", aux->cliente.saldo);
    return 1;
    break;

    case 'D':
    //deposito
    //revisa que la cuenta existe
    if(lista->cab == NULL){//La lista esta vacia
      printf("La lista esta vacia\n");
      return -1;
    }

    if(aux != NULL && aux->cliente.numCuenta != nc){
      printf("La cuenta no existe");
      return -1;
    }

    aux->cliente.saldo += monto;
    printf("Se realizo un deposito de %f en la cuenta %d\n", aux->cliente.numCuenta, monto);
    return 1;
    break;

    case 'E':
    //retiro
    //revisa que la cuenta existe
    if(lista->cab == NULL){//La lista esta vacia
      printf("La lista esta vacia\n");
      return -1;
    }

    if(aux != NULL && aux->cliente.numCuenta != nc){
      printf("La cuenta no existe");
      return -1;
    }

    //Ahora revisamos que haya saldo suficiente
    if(aux != NULL && aux->cliente.saldo - monto < 0){
      printf("Saldo insuficiente\n");
      return -1;
    }
    aux->cliente.saldo -= monto;
    return 1;
    break;

   default:
    printf("Opcion invalida\n");

  }
}

int main() {
    Lista lista;
    lista.cab = NULL;

    printf("\n--- Insertando cuentas ---\n");
    transacciones(&lista, 'A', 1001, "Juan Perez", 500.0);
    transacciones(&lista, 'A', 1002, "Maria Gomez", 1000.0);
    transacciones(&lista, 'A', 1001, "Juan Perez", 300.0); // Duplicado (debe fallar)

    printf("\n--- Consultando saldo ---\n");
    transacciones(&lista, 'C', 1001, NULL, 0); // Consulta de saldo

    printf("\n--- Haciendo depósito ---\n");
    transacciones(&lista, 'D', 1001, NULL, 200.0); // Depósito

    printf("\n--- Haciendo retiro ---\n");
    transacciones(&lista, 'E', 1001, NULL, 100.0); // Retiro

    printf("\n--- Consultando saldo actualizado ---\n");
    transacciones(&lista, 'C', 1001, NULL, 0); // Consulta nuevamente

    printf("\n--- Eliminando cuenta ---\n");
    transacciones(&lista, 'B', 1001, NULL, 0); // Baja

    printf("\n--- Intentando consultar cuenta eliminada ---\n");
    transacciones(&lista, 'C', 1001, NULL, 0); // Debe fallar

    // Liberar la memoria restante (cuentas no eliminadas)
    while (lista.cab != NULL) {
        Node *temp = lista.cab;
        lista.cab = lista.cab->sig;
        free(temp->cliente.nombre);
        free(temp);
    }

    return 0;
}

