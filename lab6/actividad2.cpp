#include <stdio.h>

int num1, num2, num3;

int main(){
    printf("Este programa sirve para identificar el mayor de tres numeros\n");
    printf("Ingrese el primer numero\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero\n");
    scanf("%d", &num3);

    if ((num1==num2)&&(num2==num3)){
        printf("Los tres numeros son iguales\n");
    } else if((num1>num2)&&(num1>=num3)){
        printf("El numero %d es el mayor de los tres\n", num1);
    } else if((num3>num2)&&(num3>=num1)){
        printf("El numero %d es el mayor de los tres\n", num3);
    } else if((num2>num1)&&(num2>=num3)){
        printf("El numero %d es el mayor de los tres\n", num2);
    } else if((num2>num3)&&(num2>=num1)){
        printf("El numero %d es el mayor de los tres\n", num2);
    } else if((num2>num3)&&(num2>=num1)){
        printf("El numero %d es el mayor de los tres\n", num2);
    } else if((num3>num1)&&(num3>=num2)){
        printf("El numero %d es el mayor de los tres\n", num3);
    } else if((num1>num3)&&(num1>=num2)){
        printf("El numero %d es el mayor de los tres\n", num1);
    }
}