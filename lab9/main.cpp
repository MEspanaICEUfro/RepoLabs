#include <stdio.h>

// Prototipos
int ejemplo(int a, int b);
void imprimirMenu();
void imprimirOpciones();
int suma(int numero1, int numero2);
int resta(int numero1, int numero2);
int multiplicacion(int numero1, int numero2);
int division(int numero1, int numero2);
float division(float numero1, float numero2);
int calculadora(int operacion, int numero1, int numero2);

// Variables Globales
int opcion;
int numero1;
int numero2;
int resultado;

int main(){
    // Variables locales de main
    int ejemplo = 4;
    // Calculadora

    // Menu
    imprimirMenu();
    
    // Opciones
    imprimirOpciones();
    scanf("%d", &opcion);

    //Pedir numeros
    printf("Ingrese el primer numero\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &numero2);
    // Restriccion de division
    while ((opcion == 4) && (numero2 == 0)){
        printf("No es posible dividir por 0. Ingrese el segundo numero nuevamente\n");
        scanf("%d", &numero2);
    }
    
    // Seleccion de operacion
    printf("El resultado es %d\n", calculadora(opcion, numero1, numero2));
    return 0;
}

int ejemplo(int a, int b){
    // Variables locales de suma
    int res = a + b;
    return res;
}

void imprimirMenu(){
    printf("-------------------\n");
    printf("-------------------\n");
    printf("----CALCULADORA----\n");
    printf("-------------------\n");
    printf("-------------------\n");
}

void imprimirOpciones(){
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicacion\n");
    printf("4.- Division\n");
    printf("Seleccione la operacion a realizar\n");
}

int calculadora(int operacion, int numero1, int numero2){
    switch(operacion){
        case 1: return suma(numero1, numero2);
                
        case 2: return resta(numero1, numero2);

        case 3: return multiplicacion(numero1, numero2);

        case 4: return division(numero1, numero2);

        default: return -1;
    }
}

int suma(int numero1, int numero2){
    int resultado = numero1 + numero2;
    return resultado;
}


int resta(int numero1, int numero2){
    int resultado = numero1 - numero2;
    return resultado;
}


int multiplicacion(int numero1, int numero2){
    int resultado = numero1 * numero2;
    return resultado;
}

float division(float numero1, float numero2){
    float resultado = numero1 / numero2;
    return resultado;
}

int division(int numero1, int numero2){
    int resultado = numero1 / numero2;
    return resultado;
}