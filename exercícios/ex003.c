#include<stdio.h>

int main() {

  float cotacao, conversao;
  printf("Digite a cotacao do dolar: ");
  scanf("%f",&cotacao);
  printf("Valor em dolar: U$ ");
  scanf("%f",&conversao);
  printf("Valor em reais: R$");
  conversao = cotacao * conversao;
  printf("%.2f",conversao);
  
  
   			
  return 0;
}
