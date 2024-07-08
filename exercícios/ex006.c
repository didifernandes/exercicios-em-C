#include <stdio.h>

int main() {

int batidas_ano;
printf("Digite a sua idade para saber quantos batimentos voc� ja teve: ");
scanf("%d", &batidas_ano);
printf("A quantidade de batimentos vai ser " "%d", batidas_ano * 365 * 24 * 60 * 60); 

return 0;
}
