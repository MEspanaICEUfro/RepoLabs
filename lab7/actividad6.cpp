#include <stdio.h>

int a=1,b=0,fib, i;
int cant;

int main(){
    printf("Este programa muestra elementos de la secuencia de Fibonacci\n");
    printf("Indique cuantos elementos de la secuencia desea ver:\n");
    scanf("%d", &cant);

    printf("0\n");
    
    for (i=0; i<=cant; i++){
        fib = a + b;
        printf("%d\n", fib);
        a=b;
        b=fib;
    }
}