#include <stdio.h>

int main(){
    //Ejemplo de 'while' (mientras-hacer)
    int impresiones = 0;
    int objetivo = 150;

    while(impresiones<objetivo){
        printf("Programacion de computadores\n");
        impresiones++;                              //Se suma 1 a "impresiones"
    }

    
    
    //Exactamente igual a 
    /*
    do {
        printf("Programacion de computadores\n");
        impresiones++;
    } while (impresiones < objetivo)
    */

    //De otra forma
    /*
    for (int i=0; i < objetivo; i++){
        printf("Programacion de computadores\n");
    }
    */

}

