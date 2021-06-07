#include <stdio.h>

int destino;
int pas1=0;
int pas2=0;
int pas3=0;
int edad;
int total=80;
int i;

int main(){
    for (i=0; i<=total; i+1){
        printf("\n<><><><><><><><><><><>\n");
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
                pas1++;
                if (pas1<=30){
                    if (edad<15){
                        printf("El valor del pasaje es de 2500 pesos\n");
                    } else if (edad>65) {
                        printf("El valor del pasaje es de 3000 pesos\n");
                    } else {
                        printf("El valor del pasaje es de 4200 pesos\n");
                    }
                } else{
                    printf("Ya no quedan cupos disponibles, muchas gracias\n");
                    i=i-1;
                }
                break;
            case 2: printf("Ha seleccionado el destino 2\n");
                pas2++;
                if (pas2<=30){
                    if (edad<15){
                    printf("El valor del pasaje es de 1200 pesos\n");
                    } else if (edad>65) {
                    printf("El valor del pasaje es de 2000 pesos\n");
                    } else {
                    printf("El valor del pasaje es de 3000 pesos\n");
                    }
                } else{
                    printf("Ya no quedan cupos disponibles, muchas gracias\n");
                    i=i-1;
                }
                break;
            case 3: printf("Ha seleccionado el destino 3\n");
                pas3++;
                if (pas3<=20){
                    if (edad<15){
                    printf("El valor del pasaje es de 2000 pesos\n");
                    } else if (edad>65) {
                    printf("El valor del pasaje es de 2500 pesos\n");
                    } else {
                    printf("El valor del pasaje es de 3800 pesos\n");
                    }
                } else{
                    printf("Ya no quedan cupos disponibles, muchas gracias\n");
                    i=i-1;
                }
                break;
            default: printf("Ha seleccionado un destino no valido\n");
        }
    }
    
    printf("Ya no quedan cupos disponibles, muchas gracias\n");
}