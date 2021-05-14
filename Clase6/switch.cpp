#include <stdio.h>

int opcion;

int main(){

    printf("<><><><><><><><><><><>\n");
    printf("---------MENU---------\n");
    printf("<><><><><><><><><><><>\n");
    printf("\n1.- SUMAR\n");
    printf("2.- SUMAR\n");
    printf("3.- SUMAR\n");
    printf("4.- SUMAR\n");
    printf("Ingrese una opcion\n");
    scanf("%d", &opcion);

    switch (opcion){
        case 1: printf("El usuario desea sumar\n");
                break;
        case 2: printf("El usuario desea restar\n");
                break;
        case 3: printf("El usuario desea multiplicar\n");
                break;
        case 4: printf("El usuario desea dividir\n");
                break;
        default: printf("Ha seleccionado una opcion no valida");
    }

}