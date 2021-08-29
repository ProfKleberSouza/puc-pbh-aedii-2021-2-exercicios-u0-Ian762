#include <stdio.h>


void menor_maior(int v[], int n, int *menor, int *maior){
  
  
  int i;
   for (i = 0; i < n; i++){
      if (v[i] < *menor){
        *menor = v[i];
      }
    }
    for (i = 1; i < n; i++){
      if (v[i] > *maior){
      *maior = v[i];
      }
    }
}

#include <stdio.h>
#include "functions.h"


int main() {
int n;


scanf("%i ", &n);
int v[n];
int i;

int res2 = 0; 
    // preenche o vetor
    for (i = 0; i < n; i++){
        scanf ("%i", &v[i]);
    }
    int res = v[0];
    menor_maior(v, n, &res, &res2);
    
    // SAIDA - IMPRIMINDO O RESULTADO
   
    printf("MENOR = %i", res);
    printf("\nMAIOR = %i", res2);
  
  return(0);
}