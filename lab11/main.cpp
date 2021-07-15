#include <stdio.h>
#include <stdlib.h> //system() -> Llamadas al sistema
#include <string.h>
#include "agendas.h"


int opcion = 0;
FILE * agenda;
char nombreAgenda[30];
char nombre[15];
char apellido[20];
char numero[20];

int main() {
  while (opcion != 6) {
        opcion = menu();
        switch (opcion) {
        case 1: mostrarAgendas();
                break;
        case 2: printf("Ingrese el nombre de la agenda a crear\n");            
                scanf("%s", nombreAgenda);
                strcat(nombreAgenda, ".txt");
                agenda = fopen(nombreAgenda, "a+");
                printf("La agenda %s ha sido creada correctamente\n", nombreAgenda);
                fclose(agenda);
                break;
        case 3: mostrarAgendas();
                printf("Ingrese el nombre de la agenda a editar (sin el .txt)\n");
                scanf("%s", nombreAgenda);
                strcat(nombreAgenda, ".txt");
                printf("Ingrese el nombre del contacto\n");
                scanf("%s", nombre);
                printf("Ingrese el apellido del contacto\n");
                scanf("%s", apellido);
                printf("Ingrese el numero del contacto\n");
                scanf("%s", numero);
                agenda = fopen(nombreAgenda, "a");
                fprintf(agenda, "%s %s %s\n", nombre, apellido, numero);
                fclose(agenda);
                printf("%s %s fue agregad@ a la lista correctamente\n", nombre, apellido);
                break;
        case 4: mostrarAgendas();
                printf("Ingrese el nombre de la agenda a eliminar (sin el .txt)\n");
                scanf("%s", nombreAgenda);
                strcat(nombreAgenda, ".txt");
                remove(nombreAgenda);
                printf("La agenda %s ha sido eliminada correctamente\n", nombreAgenda);
                fclose(agenda);
                break;
        case 5: mostrarAgendas();
                printf("Ingrese el nombre de la agenda a mostrar (sin el .txt)\n");
                scanf("%s", nombreAgenda);
                strcat(nombreAgenda, ".txt");
                agenda = fopen(nombreAgenda, "r");
                while (!feof(agenda)) {
                        fscanf(agenda, "%s %s %s\n", nombre, apellido, numero);
                        printf("%s %s %s\n", nombre, apellido, numero);
                }
                fclose(agenda);
                break;
        case 6: break;
        default: printf("La opcion elegida no es valida\n");
                printf("Escoga otra opcion\n");
                scanf("%d", &opcion);
        }
  }

  return 0;
}

