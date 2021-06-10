#include <stdio.h>
int sum=0;
int num;

int main(){
    printf("Este programa realiza la sumatoria de numeros positivos\n");
    printf("Para terminar, ingrese un numero negativo\n");
    printf("Ingrese todos los numeros a sumar:\n");


    do {
        scanf("%d", &num);
        sum = sum + num;
    } while (num>0);

    if (num<0){
        sum = sum - num;
        printf("La suma de todos los numeros es: %d", sum);
    }
}