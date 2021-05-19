#include <stdio.h>

int destino;
int edad;

int main(){

    printf("<><><><><><><><><><><>\n");
    printf("---------MENU---------\n");
    printf("<><><><><><><><><><><>\n");
    printf("\n1.- Destino 1\n");
    printf("2.- Destino 2\n");
    printf("3.- Destino 3\n");
    printf("Escoja un destino\n");
    scanf("%d", &destino);
    printf("Escriba su edad\n");
    scanf("%d", &edad);
    
    switch (destino){
        case 1: printf("Ha seleccionado el destino 1\n");
                if (edad<15){
                    printf("El valor del pasaje es de 2500 pesos");
                } else if (edad>65) {
                    printf("El valor del pasaje es de 3000 pesos");
                } else {
                    printf("El valor del pasaje es de 4200 pesos");
                }
                break;
        case 2: printf("Ha seleccionado el destino 2\n");
        if (edad<15){
                    printf("El valor del pasaje es de 1200 pesos");
                } else if (edad>65) {
                    printf("El valor del pasaje es de 2000 pesos");
                } else {
                    printf("El valor del pasaje es de 3000 pesos");
                }
                break;
        case 3: printf("Ha seleccionado el destino 3\n");
        if (edad<15){
                    printf("El valor del pasaje es de 2000 pesos");
                } else if (edad>65) {
                    printf("El valor del pasaje es de 2500 pesos");
                } else {
                    printf("El valor del pasaje es de 3800 pesos");
                }
                break;
        default: printf("Ha seleccionado un destino no valido");
    }
}