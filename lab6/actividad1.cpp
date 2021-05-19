#include <stdio.h>

int numero;
int resto;

int main(){
    printf("Con este programa, usted puede identificar si un numero es par o impar\n");
    printf("Escriba un numero\n");
    scanf("%d", &numero);

    resto = numero%2;

    if (resto==1){
        printf("El numero %d es impar", numero);
    } else {
        printf("El numero %d es par", numero);
    }
}