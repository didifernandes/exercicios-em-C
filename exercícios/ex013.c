#include <stdio.h>
int main () {

int tempo_horas;
float taxa_consumo,valor_watt,energia_total,valor_total;
printf("Digite o tempo de uso do aparelho em horas: ");
scanf("%d",&tempo_horas);
printf("Digite a taxa de consumo do aparelho em kWh/h: ");
scanf("%f",&taxa_consumo);
printf("Qual o valor do kWh/h: ");
scanf("%f",&valor_watt);
energia_total = tempo_horas * taxa_consumo;
valor_total = energia_total * valor_watt;
printf("A energia consumida foi de %.2f kWh e o valor a ser pago eh de R$ %.2f",energia_total,valor_total);
  return 0;
} 

