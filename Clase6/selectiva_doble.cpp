#include <stdio.h>

int num1;
int num2;

int main(){
    printf("Ingrese el primer numero\n");
    scanf("%i", &num1);
    
    printf("Ingrese el segundo numero\n");
    scanf("%i", &num2);
    
    if(num1>num2){
        printf("El numero mayor es %i", &num1);
    } else {
        printf("El numero mayor es %i", &num2);
    }
}