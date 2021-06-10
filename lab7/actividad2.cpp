#include <stdio.h>
int X;
int Y;
int PROD=0;
int i=1;

int main(){
    printf("Este programa multiplica dos numeros X,Y");
    printf("Ingrese dos numeros naturales separados por una coma (,)\n");
    printf("Ejemplo: 3,4    5,6    7,2\n");
    scanf("%d,%d", &X, &Y); 

    while (i<=Y){
        PROD = PROD + X;
        i++;
    }

    printf("El producto de %d por %d es: %d\n", X, Y, PROD);
}