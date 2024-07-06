#include <stdio.h>
int main () {

char n1,n2,n3;
int i1,i2,i3;
float p1,p2,p3,peso_m;

printf("Nome 1: ");
scanf("%s", &n1);
printf("Nome 2: ");
scanf("%s", &n2);
printf("Nome 3: ");
scanf("%s", &n3);

printf("Idade 1: ");
scanf("%d",&i1);
printf("Idade 2: ");
scanf("%d",&i2);
printf("Idade 3: ");
scanf("%d",&i3);

printf("Peso 1: ");
scanf("%f", &p1);
printf("Peso 2: ");
scanf("%f", &p2);
printf("Peso 3: ");
scanf("%f", &p3);
  
peso_m = (p1+p2+p3)/3;
printf("O peso medio entre eles eh: %.2f", peso_m);


  return 0;
} 

