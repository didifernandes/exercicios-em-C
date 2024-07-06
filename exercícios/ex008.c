#include <stdio.h>


int main()  { ; 
float milimetro_pol = 25.4;
float celsius,fahrenheit,polegadas,milimetros;

printf("Digite a temperatura em fahrenheit: ");
scanf("%f",&fahrenheit);
celsius = ((fahrenheit * 5) - 160) / 9;
printf ("A temperatura em celsius e: %.2f°C\n",celsius);
printf("Digite a quantidade de chuva em polegadas: ");
scanf("%f",&polegadas);
milimetros = polegadas * milimetro_pol;
printf("A quantidade em mililitros e: %.2fml",milimetros);


  return 0;
} 

