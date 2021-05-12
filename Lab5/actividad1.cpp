#include <stdio.h>

int numero1 = 0;
int numero2 = 0;
int suma = 0;


int main() {
  printf ("Este es un programa disenhado para sumar dos numeros\n");
  printf ("Ingrese el primer numero\n");
  scanf("%d", &numero1);
  printf ("Ingrese el primer numero\n");
  scanf("%d", &numero2);
  suma = numero1 + numero2;
  printf("El total de la suma es %d", suma);
  return 0;
}