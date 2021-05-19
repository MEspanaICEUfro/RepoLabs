#include <stdio.h>
#include <math.h> /* Inclusion de libreria de constantes
                    que es necesaria para tener el valor de pi*/

float radio;
float perimetro;
float area;

int main () {
    printf("Esta es una calculadora de area y perimetrod de un circulo\n");
    printf("Ingrese el radio del circulo\n");
    scanf("%f", &radio);

    //Calculo del perimetro
    perimetro = 2*(M_PI)*(radio); 
    //Calculo del area
    area = (M_PI)*(radio)*(radio);

    printf("El perimetro del circulo es %f y el area es %f", perimetro, area);
}