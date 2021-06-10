#include <stdio.h>

int numero;


int main(){
    printf("Ingrese un numero\n");
    scanf("%d", &numero);

    for(int i = 2; i <= numero; i++){
        //Revisar si i es primo
        int cont, mitad=0, flag=0; //flag es un marcador
        mitad=i/2; /*Pasado la mitad de un numero,
                   todos los numeros son compuestos*/
        for(cont=2; cont<=mitad; cont++){
            if(i%cont==0){
                //i no es primo
                flag=1;
                break;
            }
        }
        
        if (flag==0){ //Cuando flag no detecte un numero no primo
            printf("%d\n", i);
        }
    }
}