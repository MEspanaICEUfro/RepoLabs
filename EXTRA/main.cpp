#include <stdio.h>
#include <time.h>



int main(){
    time_t t;
    time(&t);
    
    printf("Hoy es %s", ctime(&t));
}