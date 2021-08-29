#include <stdio.h>

int main() {
   int a;
   int b;
   int c;

   scanf("%d%d%d", &a, &b, &c);

   if(a > b && a > c){
     printf("MAIOR = %d", a);
   }
   if(b > a && b > c){
     printf("MAIOR = %d", b);
   }
   if(c > a && c > b){
     printf("MAIOR = %d", c);
   }
   if(a < b && a < c){
     printf("\nMENOR = %d", a);
   }
   if(b < a && b < c){
     printf("\nMENOR = %d", b);
   }
   if(c < a && c < b){
     printf("\nMENOR = %d", c);
   }
   return 0;
}