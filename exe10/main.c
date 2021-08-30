#include <stdio.h>

int main() {

   int vet[10];

   for(int i=0;i<10;i++) {

      scanf("%d",&vet[i]);

   }

   for (int i=0,x=9;i<10;i++,x--) {

     printf("%d\n",vet[x]);

   }

   return 0;
}