#include <stdio.h>
#include "arreglosNumericos.h"


int main(){
    int numeros[4];
    pedirNumerosArreglo(numeros, 4);
    printf("La sumatoria es %d\n", sumaArreglo(numeros, 4));
    return 0;
}

