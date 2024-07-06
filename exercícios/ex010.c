#include <stdio.h>
int main () {

int anos,dias,meses,calculo_dias;
printf("Digite sua idade em anos: ");
scanf("%d",&anos);
printf("Digite sua idade em meses: ");
scanf("%d",&meses);
printf("Digite sua idade em dias: ");
scanf("%d",&dias);
calculo_dias = (anos * 365) + (meses * 30) + dias;
printf("Sua idade somente em dias eh: %d ", calculo_dias);

  return 0;
} 

