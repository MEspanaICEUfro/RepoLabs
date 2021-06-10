#include <stdio.h>
int i=1;
int num;

int main(){
    printf("Este programa le muestra los divisores de un numero positivo\n");
    printf("Ingrese el numero positivo\n");
    scanf("%d", &num);
    printf("Los divisores de %d son:\n", num);

    while (i<=num){
        if ((num%i) == 0){
            printf("%d\n", i);
        }        
        i++;
    }
}