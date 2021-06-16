#include <stdio.h>

//Levantamos un arreglo para caracteres de 3x3 (una matriz)
char tablero[3][3];
int fila, columna;
bool ganador = false;
int turnos = 0;


int main(){
    for(int i = 0 ; i < 3 ; i++){      //Escoge las filas
        for(int j = 0 ; j < 3 ; j++){  //Escoge las columnas
            tablero[i][j] = '-';
        }
    }  
        printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

    while(!ganador && turnos < 9){
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

        printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

        //Evaluar filas
        if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
            printf("GANADOR");
            ganador = true;
        }
        if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
            printf("GANADOR");
            ganador = true;
        }
        if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
            printf("GANADOR");
            ganador = true;
        }

        //Evaluar columnas
        if((tablero[0][0] == tablero[1][0]) && (tablero[2][0] == tablero[1][0]) && (tablero[0][0] != '-')){
            printf("GANADOR");
            ganador = true;
        }
        if((tablero[1][1] == tablero[0][1]) && (tablero[2][1] == tablero[1][1]) && (tablero[1][1] != '-')){
            printf("GANADOR");
            ganador = true;
        }
        if((tablero[2][2] == tablero[1][2]) && (tablero[2][2] == tablero[0][2]) && (tablero[2][2] != '-')){
            printf("GANADOR");
            ganador = true;
        }

        //Evaluar diagonales
        if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
            printf("GANADOR");
            ganador = true;
        }
        if((tablero[2][0] == tablero[1][1]) && (tablero[1][1] == tablero[0][2]) && (tablero[1][1] != '-')){
            printf("GANADOR");
            ganador = true;
        }
        
        turnos++;
    }  

    if (ganador==false){
        printf("EMPATE");
    }
}    


