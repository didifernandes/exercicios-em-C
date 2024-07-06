#include <stdio.h>

int main () {
float pi = 3.14;
float raio, area_superficie, altura,valor_total,valor_aluminiom2;
printf("Digite o raio da area cilindrica em metros: ");
scanf("%f", &raio);
printf("Digite a altura da area cilindrica em metros: ");
scanf("%f", &altura);
printf("Digite o valor do metro quadrado em reais: ");
scanf("%f", &valor_aluminiom2);
area_superficie = 2 * pi * raio * (raio + altura);
valor_total = area_superficie * valor_aluminiom2;
printf("O valor total da area cilindrica eh: R$ %.2f", valor_total);
  

  
  return 0;
} 

