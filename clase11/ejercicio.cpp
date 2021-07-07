#include <stdio.h>

void pedirOpcion(int* opcion, int menor, int mayor);

int main(){

    int opcion;
    int numero1;
    int numero2;
    int resultado;
    
    pedirOpcion(&opcion, 1, 4);
    printf("La opcion es %d\n", opcion);

    return 0;
}

void pedirOpcion(int* opcion, int menor, int mayor){
    do {
        printf("Ingrese la opcion\n");
        scanf("%d", opcion);
    } while((*opcion < menor) || (*opcion > mayor)); 
}