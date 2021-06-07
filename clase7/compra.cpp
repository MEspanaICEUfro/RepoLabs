#include <stdio.h>

int CantidadCompras;
int precio;
int codigo;
int puntos;
int suma;
int acum;
int respuesta;

int main(){
    //Bienvenida
    printf("<><><><><><><><><><>\n");
    printf("<><><BIENVENIDO><><>\n");
    printf("<><><><><><><><><><>\n\n");

    //Cantidad de compras?
    printf("Ingrese la cantidad de compras que desea realizar:\n");
    scanf("%d", &CantidadCompras);

    //precio/código?
    for(int i = 0 ; i < CantidadCompras ; i++ ){
        printf("\nIngrese el codigo del producto %d:\n", i + 1);
        scanf("%d", &codigo);
        printf("Ingrese el precio del producto %d:\n", i + 1);
        scanf("%d", &precio);
        printf("PRODUCTO %d -> CODIGO %d - PRECIO %d \n", i+1, codigo, precio); 
        
        if ((codigo>=100 && codigo<200)){
            	if(precio<10000){
                    printf("Se acumula 1 punto por cada 100 pesos\n");
                    acum=(precio/100);        
                } else {
                    printf("Se acumula 1 punto por cada 50 pesos\n");
                    acum=(precio/50); 
                }
        }
        if ((codigo>=200 && codigo<300)){
            	if(precio<10000){
                    printf("Se acumula 1 punto por cada 50 pesos\n");
                    acum=(precio/50);        
                } else {
                    printf("Se acumula 1 punto por cada 30 pesos\n");
                    acum=(precio/30); 
                }
        }


        if (puntos*10 >= precio){
            printf("Puede realizar su compra con puntos\n");
            printf("Desea pagar este producto con puntos? (1=SI, 2=NO)\n");
            scanf("%d", &respuesta);
            if (respuesta==1){
                puntos = (puntos*10 - precio)/10 ;
                printf("Usted ahora tiene %d puntos\n\n", puntos);
            } else {
                puntos = puntos + acum;
                printf("Usted ahora tiene %d puntos\n\n", puntos);
                suma = suma + precio;
            }
        } else {
            printf("Su compra debe ser pagada con efectivo\n");
            puntos = puntos + acum;
            suma = suma + precio ;
            printf("Usted ahora tiene %d puntos\n\n", puntos);
        } 
    }
    printf("Puntos totales: %d\n", puntos);
     printf("Total de la compra: %d CLP\n", suma);
}
