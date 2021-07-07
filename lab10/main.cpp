#include <stdio.h>
#include "./juegoGato.h"

// Variables
char tablero[3][3];
bool ganador = false;
int turnos = 0;


int main(){
    llenarTablero(tablero);
    imprimirTablero(tablero);
    

    while(!ganador && turnos < 9){
        ingresarJugada(tablero, turnos);
        imprimirTablero(tablero);
        ganador = revisarGanador(tablero);
        turnos++;
    }  

    if (ganador==false){
        printf("EMPATE");
    }
    return 0;
}




