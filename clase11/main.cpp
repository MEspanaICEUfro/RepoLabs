#include <stdio.h>

// Por valor
void funcion(int x);
// Por referencia
void funcion2(int* x);


int main(){
    int numero = 5;
    funcion(numero);
    printf("El numero es %d\n", numero);

    // Imprimir la direccion
    // printf("%p\n", &numero);

    funcion2(&numero);
    printf("El numero es %d\n", numero);
    return 0;
}

void funcion(int x){
    x = x * x;
    printf("funcion --> %d\n", x);
}

void funcion2(int* x){
    *x = (*x) * (*x);
}