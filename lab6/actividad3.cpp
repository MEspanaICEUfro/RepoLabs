#include <stdio.h>

int clave = 20622748;
int entrada;

int main(){
    printf("Ingrese la clave de acceso\n");
    scanf("%d", &entrada);

    if (entrada==clave){
        printf("Bienvenido\n");
    } else{
        printf("Clave incorrecta. Tiene 2 intentos restantes\n");
        scanf("%d", &entrada);
        
        if (entrada==clave){
            printf("Bienvenido\n");
        } else {
            printf("Clave incorrecta. Tiene 1 intento restante\n");
            scanf("%d", &entrada);
            if (entrada==clave){
                printf("Bienvenido\n");
            } else {
                printf("Clave incorrecta. Usuario bloqueado\n");
            }
        }
    }
}