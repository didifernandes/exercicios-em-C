#include <stdio.h>

int main () {
int publico;
float renda,popular,geral,arquibancada,cadeiras;

printf("Digite o publico do jogo: ");
scanf("%d",&publico);
popular = 0.1 * publico * 1;
geral = 0.5 * publico * 5;
arquibancada = 0.3 * publico * 10;
cadeiras = 0.1 * publico * 20;

renda = popular + geral + arquibancada + cadeiras;
printf("A renda do jogo foi de: %.2f ", renda);
  
  return 0;
} 

