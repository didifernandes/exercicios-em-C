#include <stdio.h>

int main() {

int bat_ano;
printf("Digite a sua idade para saber quantos batimentos você ja teve: ");
scanf("%d", &bat_ano);
printf("A quantidade de batimentos vai ser " "%d", bat_ano * 365 * 24 * 60 * 60); 

return 0;
}
