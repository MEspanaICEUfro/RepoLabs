#include <stdio.h>

float decimal1 = 0;
float decimal2 = 0;
float producto = 0;

int main () {
    printf("Este es un programa para multiplicar dos numeros decimales\n");
    printf("Ingrese dos numeros decimales de forma X.X , Y.Y\n");
    printf("Ejemplos: 3.34 , 4.233; 23.8 , 12.09  \n");
    scanf("%f , %f", &decimal1, &decimal2);

    producto = decimal1 * decimal2;

    printf("El producto entre los numeros es %f\n", producto);


}

