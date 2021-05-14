#include <stdio.h>

float nota;

int main(){
    printf("Ingrese una nota entre 1.0 y 7.0\n");
    scanf("%f", &nota);
    
    if((nota >= 1.0)&&(nota < 4.0)){
        printf("La nota ES INSUFICIENTE");

        } else if(nota < 5.0){
        printf("La nota ES SUFICIENTE");
        
        } else if(nota < 6.0){
        printf("La nota es BUENA");

        } else if(nota <= 7.0){
        printf("La nota ES MUY BUENA");
    }
}