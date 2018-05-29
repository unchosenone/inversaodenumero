#include <stdio.h>
#include <stdlib.h>

int main(){


  int NUM, NUM1, NUM2, NUM3, NUM4;
 
  printf("inversão de numero\n\n");
  printf("Digite um numero de 3 digitos\n ");
  scanf("%d", &NUM);
  if(NUM>10)
 {
   NUM1=NUM%10;
   NUM=NUM/10;
   NUM2=NUM%10;
   NUM=NUM/10;
   NUM3=NUM%10;
  
 }  
  printf(" o numero invertido ficou %d%d%d\n\n", NUM1,NUM2,NUM3);
 
 
}
