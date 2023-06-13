#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * numeros;
    int cantidad,i;
    printf("Ingrese la cantidad de numeros a almacenar: ");
    scanf("%d", &cantidad);
    
    numeros=(int*)malloc(cantidad*sizeof(int));
    if(numeros==NULL){
        printf("Error al asignar memoria dinámica. \n");
        return 1;
    }
    
    printf("Ingrese los números: \n");
    for(i=0; i<cantidad; i++){
        scanf("%d", &numeros[i]);
    }
    printf("Los números ingresados son: \n");
    for(i=0; i<cantidad; i++){
        printf("%d \n", numeros[i]);
    }
    
    free(numeros);
    return 0;
