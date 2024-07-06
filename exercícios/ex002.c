#include <stdio.h>

int main() {

  float n1,n2,n3;
  float media;
  printf("Digite um numero qualquer: ");
  scanf("%f",&n1);
  printf("Digite outro: ");
  scanf("%f",&n2);
  printf("Digite mais um: ");
  scanf("%f",&n3);
  media = (n1+n2+n3) / 3;
  printf("A media entre esses numeros eh: %.2f", media);
  
   			
  return 0;
}
