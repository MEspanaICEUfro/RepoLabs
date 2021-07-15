#include <stdio.h>
#include <stdlib.h>
#include "agendas.h"

int menu() {
        int opcion;
        printf("---Agendas Contactos---\n");
        printf("1.- Listar agendas\n");
        printf("2.- Crear agenda\n");
        printf("3.- Anhadir registro a agenda\n");
        printf("4.- Eliminar una agenda\n");
        printf("5.- Mostrar el contenido de una agenda\n");
        printf("6.- Salir\n");
        printf("Ingrese una opcion\n");
        scanf("%d", &opcion);
        return opcion;
}

void mostrarAgendas(){
        printf("Las agendas de contactos disponibles son:\n");
        system("ls *.txt");
}
