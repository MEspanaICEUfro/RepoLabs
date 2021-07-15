#include <stdio.h>
#include <time.h>
#include <string.h>

void nombreArchivo();
void crearArchivo();
void registrar(long numero, const char*cadena);

char fileName[12];
FILE * escritura;
long numero;
char nombre[100];


int main(){
    crearArchivo();
    printf("Escribe tu celular\n");
    scanf("%ld", &numero);
    printf("Escribe tu nombre\n");
    scanf("%s", &nombre);
    registrar(numero, nombre);
    /* FILE * grabar;
    grabar = fopen(fileName, "a");
    fprintf(grabar, "Camilo 123410 camilo@ufromail.cl\n");
    fprintf(grabar, "Alejandra 567710 alejandra@ufromail.cl\n");
    fprintf(grabar, "Daniel 935610 daniel@ufromail.cl\n");      */

    fclose(escritura); 
    return 0;
}

void crearArchivo(){
    nombreArchivo();
    escritura = fopen(fileName, "a+");
}

void nombreArchivo(){
    time_t rawtime;
    struct tm * timeinfo;
    
    char strMonth[5], strDay[5], strYear[5];

    time( &rawtime );
    timeinfo = localtime(&rawtime);
    
    sprintf(strYear, "%d", (timeinfo->tm_year+1900));
    sprintf(strMonth, "%02d", timeinfo->tm_mon+1);
    sprintf(strDay, "%02d", timeinfo->tm_mday);
    
    strcpy(fileName, "./OUT/");
    strcat(fileName, strYear);
    strcat(fileName, strMonth);
    strcat(fileName, strDay);
    strcat(fileName, ".txt");
}

void registrar(long numero, const char*cadena){
    char celular[8];
    sprintf(celular, "%ld", numero);
    
    fprintf(escritura, celular);
    fprintf(escritura, " | ");
    fprintf(escritura, cadena);
    fprintf(escritura, " | \n");   
}