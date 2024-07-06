#include <stdio.h>

int main() {

float salario,reajuste;
printf("Digite o salario atual: ");
scanf("%f",&salario);
printf("Digite o percentual de reajuste: ");
scanf("%f",&reajuste);
printf("Com o reajuaste o valor do salario eh: ");
printf("%.2f",salario - (salario * reajuste/100));


  
  return 0;
}
