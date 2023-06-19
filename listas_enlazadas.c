#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Nodo {
    char nombre[20];
    struct Nodo* siguiente;
} Nodo;

typedef struct ListaEnlazada {
    Nodo* cabeza;
} ListaEnlazada;

void insertar_al_final(ListaEnlazada* lista, char* nombre) {
    Nodo* nuevo_nodo = (Nodo*) malloc(sizeof(Nodo));
    strcpy(nuevo_nodo->nombre, nombre);
    nuevo_nodo->siguiente = NULL;
    
    if (lista->cabeza == NULL) {
        lista->cabeza = nuevo_nodo;
    } else {
        Nodo* actual = lista->cabeza;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo_nodo;
    }
}

void imprimir_lista(ListaEnlazada* lista) {
    Nodo* actual = lista->cabeza;
    while (actual != NULL) {
        printf("%s: %p -> ", actual->nombre,&actual->nombre);
        actual = actual->siguiente;
    }
    printf("NULL\n");
}
int main() {
    ListaEnlazada lista;
    lista.cabeza = NULL;
    
    insertar_al_final(&lista, "Juan");
    insertar_al_final(&lista, "Ana");
    insertar_al_final(&lista, "Pedro");
    
    imprimir_lista(&lista);
    
    return 0;
}
