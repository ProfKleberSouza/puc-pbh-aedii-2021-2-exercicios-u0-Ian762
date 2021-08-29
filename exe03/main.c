#include <stdio.h>
#include <stdlib.h>
int main() {
   int n;
   int resto;
   
   scanf("%d", &n);
   resto = n % 2;

   if(resto == 0 && n > 0){
     printf("NUMERO PAR POSITIVO");

   }
   
  if(resto == 1 && n < 0 ){
     printf("NUMERO IMPAR NEGATIVO");
   }
   if(resto == 0 && n < 0 ){
     printf("NUMERO PAR NEGATIVO");
   }
   if(resto == 1 && n > 0){
     printf("NUMERO IMPAR POSITIVO");
   }
   if(n == 0){
     printf("NUMERO NEUTRO");
   }

  

   
   return 0;
}