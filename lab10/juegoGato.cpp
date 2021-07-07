#include "./juegoGato.h"
#include <stdio.h>

// Implementaciones
void llenarTablero(char tablero[3][3]){
    for(int i = 0 ; i < 3 ; i++){      // Escoge las filas
        for(int j = 0 ; j < 3 ; j++){  // Escoge las columnas
            tablero[i][j] = '-';
        }
    }
}

void imprimirTablero(char tablero[3][3]){
    printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
}

void ingresarJugada(char tablero[3][3], int turnos){
    int fila;
    int columna;
    
    if (turnos%2 == 0){
        printf("JUGADOR O --> Ingrese su jugada de la forma fila,columna:\n");
        scanf("%d,%d", &fila, &columna);    
        while(tablero[fila-1][columna-1] != '-'){
            printf("No se puede realizar esa jugada. Ingrese otro movimiento:\n");
            scanf("%d,%d", &fila, &columna);
        }  
        tablero[fila-1][columna-1] = 'O';
    } else {
        printf("JUGADOR X --> Ingrese su jugada de la forma fila,columna:\n");
        scanf("%d,%d", &fila, &columna);
        while(tablero[fila-1][columna-1] != '-'){
            printf("No se puede realizar esa jugada. Ingrese otro movimiento:\n");
            scanf("%d,%d", &fila, &columna);
        }  
        tablero[fila-1][columna-1] = 'X';
    }
}

bool revisarGanador(char tablero[3][3]){
    //Evaluar filas
    if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
        printf("GANADOR");
        return true;
    }
    if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
        printf("GANADOR");
        return true;
    }
    if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
        printf("GANADOR");
        return true;
    }

    //Evaluar columnas
    if((tablero[0][0] == tablero[1][0]) && (tablero[2][0] == tablero[1][0]) && (tablero[0][0] != '-')){
        printf("GANADOR");
        return true;
    }
    if((tablero[1][1] == tablero[0][1]) && (tablero[2][1] == tablero[1][1]) && (tablero[1][1] != '-')){
        printf("GANADOR");
        return true;
    }
    if((tablero[2][2] == tablero[1][2]) && (tablero[2][2] == tablero[0][2]) && (tablero[2][2] != '-')){
        printf("GANADOR");
        return true;
    }

    //Evaluar diagonales
    if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
        printf("GANADOR");
        return true;
    }
    if((tablero[2][0] == tablero[1][1]) && (tablero[1][1] == tablero[0][2]) && (tablero[1][1] != '-')){
        printf("GANADOR");
        return true;
    }

    return false;   
}