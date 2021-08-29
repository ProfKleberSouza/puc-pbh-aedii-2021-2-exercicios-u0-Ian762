#include <stdio.h>


int main(){
    

        float rep;
        float n;
        float menor = 1000, maior = 0;

       
        scanf("%f", &rep);

        for(int i = 0;i < rep; i++) {
           scanf("%f", &n);
    

            if (n>maior) {
                maior=n;
            }
            if (n<menor) {
                menor= n;
            }
        }
        printf("MAIOR = %2.f", maior);
        printf("\nMENOR = %2.f", menor);
}