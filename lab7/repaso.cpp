#include <stdio.h>

int a = 5;
int b = 3;
int x = 2;
int y = 3;

int main(){
   //MIENTRAS-HACER
    while(a>b){
        printf("A es mayor que B\n");
        a--;

    }
   
    printf("\n");

   //HACER-MIENTRAS
   do{
       printf("HACER - MIENTRAS\n");
   } while(x>y);
    
    printf("\n");

   //PARA
    for(int i=0; i<10; i++){
        printf("PARA\n");
    }

   return 0;
}