#include <stdio.h>

int num1, num2, suma;

int main(){
    printf("Ingrese el primer numero\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &num2);
    if (num2 == 5){
        suma = num1 + num2;
        printf("La suma es %d", suma);
    }
}