#include <stdio.h>

int areas[10][10] = {
    {2, 9, 0, 0, 10, 9, 6, 10, 5, 4},
    {9, 6, 5, 0, 0, 9, 6, 3, 2, 8},
    {3, 3, 8, 10, 6, 9, 5, 4, 3, 9},
    {2, 6, 3, 6, 4, 3, 6, 2, 8, 3},
    {6, 6, 9, 10, 3, 4, 2, 9, 9},
    {4, 10, 4, 4, 9, 0, 9, 10, 8, 8},
    {2, 2, 0, 3, 5, 4, 4, 6, 6, 5},
    {8, 4, 1, 3, 9, 5, 6, 6, 7, 7},
    {8, 1, 4, 9, 5, 7, 7, 3, 4, 4},
    {4, 8, 5, 4, 2, 3, 3, 2, 3, 6},
};

int fila, columna;
int misiones = 6;
int elementos, cuadriculas=0, tesoros=0;
char N, O, S, E;
int lat, lon;
int movx, movy;
char dirx, diry;

int main(){
    printf("************\n BIENVENIDO \n************\n\n");
    
    //Realizaremos 6 misiones
    for (int i = 0; i < misiones; i++){
        tesoros = 0, cuadriculas=0;
        printf("Esta es la mision numero %d\n", i+1);
        printf("Ingrese las coordenadas donde desea empezar, de forma fila,columna:\n");
        scanf("%d,%d", &fila, &columna);
        tesoros = tesoros + areas[fila-1][columna-1];
        printf("Aqui hay %d tesoros\n", areas[fila-1][columna-1]);
        
        printf("En que direccion desea moverse?\n");
        printf("Tome en cuenta que el movimiento sera horizontal y luego vertical\n");
        printf("Ingrese su respuesta como coordenadas geograficas (ejemplo 6 N,5 E; 4 S,6 O)\n");
        scanf("%d %c,%d %c", &lat, &diry, &lon, &dirx);
        while((diry=='O')||(diry=='E')||(dirx=='N')||(dirx=='S')){
            printf("Ha ocurrido un error. Revise que las coordenadas de movimiento esten bien escritas\nIngrese las coordenadas de movimiento nuevamente\n");
            scanf("%d %c,%d %c", &lat, &diry, &lon, &dirx); 
        }
        movy = lat; movx = lon;
        if (diry == 'N'){
            lat = lat*(-1);
        }
        if (dirx == 'O'){
            lon = lon*(-1);
        }    
        while(((fila+lat)>10)||((columna+lon)>10)||((columna+lon)<1)||((fila+lat)<1)){
            printf("Este movimiento se sale del area de estudio. Intente con otras coordenadas\n");
            scanf("%d %c,%d %c", &lat, &diry, &lon, &dirx);
        }
        while(((fila+lat)>10)||((columna+lon)>10)||((lon+columna)<1)||((lat+fila)<1)){
            printf("Este movimiento se sale del area de estudio. Intente con otras coordenadas\n");
            scanf("%d %c,%d %c", &lat, &diry, &lon, &dirx);
        }
        printf("El movimiento sera %d,%d\n", lat, lon);

        for (int x = 0; x<movx; x++){
            if (lon>1){
                columna = columna + 1;
            } else if(lon<1){
                columna = columna - 1;
            }                 
            printf("En la casilla %d,%d hay %d tesoros\n", fila, columna, areas[fila-1][columna-1]);
            tesoros = tesoros + areas[fila-1][columna-1];
            cuadriculas = cuadriculas + 1;
            
        }
        for (int y = 0; y<movy; y++){
            if (lat<0){
                fila = fila - 1;
            } else if(lat>0){
                fila = fila + 1;
            }
            printf("En la casilla %d,%d hay %d tesoros\n", fila, columna, areas[fila-1][columna-1]);
            tesoros = tesoros + areas[fila-1][columna-1];
            cuadriculas = cuadriculas + 1;
        }
        printf("En esta mision:\n");
        printf("Se encontraron %d tesoros\n", tesoros);
        printf("Se recorrrieron %d cuadriculas\n\n", cuadriculas);
    }
}