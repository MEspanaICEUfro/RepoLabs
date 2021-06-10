#include <stdio.h>
int i;

int main(){
    printf("Los numeros pares entre 0 y 100 son:\n");
    
    for (i=0; i<=100; i++){
        if ((i%2)==0){
            printf("%d\n", i); 
        }
    }
}