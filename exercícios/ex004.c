#include <stdio.h>

int main() {

  float horas_trab,valor_hora,salario_bruto;
  printf("Digite o numero de horas trabalhadas: ");
  scanf("%f",&horas_trab);
  printf("Digite o valor da hora de trabalho: ");
  scanf("%f",&valor_hora);
  salario_bruto = horas_trab * valor_hora;
  printf("Com o desconto do vale transporte, o salario bruto eh : R$");
  printf("%.2f",salario_bruto - (salario_bruto * 0.06));
  
  
  return 0;
}
