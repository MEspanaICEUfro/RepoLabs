#include <stdio.h>


float notaP1;
float notaP2;
float notaT1;
float notaT2;
float notaT3;
float actitudinal;
float pondtotal;
float dif;
float res;


int main(){
   
    printf("<><><><><><><><><><><><><><><><><><><>\n");
    printf("Calculadora para la nota de la prueba 2\n");
    printf("<><><><><><><><><><><><><><><><><><><>\n");
    printf("\nEsta aplicacion calcula la nota que necesitas en tu prueba 2 para aprobar\n");
    printf("Ingresa la nota que se te pida en escala de 1.0 a 7.0, con PUNTO no coma\n");
    printf("Ejemplos: 3.4 , 4.5 , 6.5 , 1.2 , 5.0\n");
    printf("Ingresa la nota de tu prueba 1\n");
    scanf("%f", &notaP1);
    printf("Ingresa la nota de tu tarea 1\n");
    scanf("%f", &notaT1);
    printf("Ingresa la nota de tu tarea 2\n");
    scanf("%f", &notaT2);
    printf("Ingresa la nota de tu tarea 3\n");
    scanf("%f", &notaT3);
    printf("Ingresa la nota actitudinal\n");
    scanf("%f", &actitudinal);



   pondtotal = (notaP1*0.25)+(notaT1*0.1)+(notaT2*0.1)+(notaT3*0.1)+(actitudinal*0.1);
    dif = 4 - pondtotal;

    if(dif < 0 ){
        dif = dif * (-1);
    } else {
        dif = dif;
    }


    res = ((dif *100)/35);


    if(1<res && res<=7){
        printf("La nota de la prueba 2, debe ser %.1f para aprobar", res);
    } else if(res>7){
        printf("No hay nota existente que te permita aprobar");
    }
}