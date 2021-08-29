#include <stdio.h>

int main() {
   float a, b , c, d;
   float media;

   scanf("%f %f %f %f", &a, &b, &c, &d);

   media = (a+b+c+d)/4;

   if(media >= 6){
     printf("NOTA = %.2f (APROVADO)", media);
   }
   else{
     printf("NOTA = %.2f (REPROVADO)", media);
   }
   
   return 0;
}