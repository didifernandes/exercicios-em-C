#include <stdio.h>
int main () {

  int dias,km_rodados;
float taxa_fixa,taxa_km,desconto,total_aluguel;

printf("Quantos dias o carro foi alugado?: ");
scanf("%d", &dias);
printf("Quantos km o carro rodou?: ");
scanf("%d",&km_rodados);
printf("Qual a taxa fixa por dia?: ");
scanf("%f",&taxa_fixa);
printf("Qual a taxa por km rodado?: ");
scanf("%f",&taxa_km);
desconto = (taxa_fixa* 0.1) * dias;
total_aluguel = (taxa_fixa * dias - desconto) + taxa_km * km_rodados;

printf("Valor total do aluguel: R$ %.2f\n", total_aluguel);
printf("O valor do desconto foi de: R$ %.2f\n", desconto);
printf("Quantidade de dias: %d\n", dias);
printf("Quantidade de km rodados: %d\n", km_rodados);
  return 0;
} 

