#include <stdio.h>

int main() {
   int x, y , z;

   scanf("%d %d %d", &x, &y, &z);
   if(x > z + y){
     printf("OS LADOS NAO FORMAM UM TRIANGULO");
     return 0;
   }
   
   if(y > x + y){
     printf("OS LADOS NAO FORMAM UM TRIANGULO");
     return 0;
   }

   if(z > x + y){
     printf("OS LADOS NAO FORMAM UM TRIANGULO");
     return 0;
   }
   if( (x==y) && (y==z) ){
     printf("TRIANGULO EQUILATERO");
   }
   else if( (x!=y) && (x!=z) && (y!=z)){
     printf("TRIANGULO ESCALENO");
   }
   else{
     printf("TRIANGULO ISOSCELES");
   }
   

  
   return 0;
}