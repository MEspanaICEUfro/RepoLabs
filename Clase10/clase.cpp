#include <stdio.h>

//Prototipo de una función
int suma(int a, int b);
int resta(int a, int b);

//Variables

int main(){
    int numero1 = 5;  
    int numero2 = 2;
    int c = resta(numero1, numero2);
    printf("El resultado es: %d", c);

    return 0;
}

int suma(int a, int b){
    int resultado;
    resultado = a + b;
    return resultado;
}

int resta(int a, int b){
    int resultado;
    resultado = a - b;
    return resultado;
}