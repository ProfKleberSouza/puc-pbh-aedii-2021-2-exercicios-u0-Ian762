#include <stdio.h>
 
 int main(){

    int num;
    do{
    scanf("%d", &num);
    if(num > 0 && num != 0){
      printf("\nPOSITIVO");
    }
    if(num < 0 && num != 0){
      printf("\nNEGATIVO");
    }
    if(num == 0){
      break;
    }

    }while(num != 0);
      }
        

