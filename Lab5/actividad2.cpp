#include <stdio.h>

char c;

int main() {
    printf("Este es conversor de caracteres a ASCII\n");
    printf("Ingrese un caracter\n");
    scanf("%c", &c);

    printf("El valor de %c en ASCII es: %d", c, c);
}