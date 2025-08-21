#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){

float raio, comprimento, area, volume;

printf("Digite o valor do raio em metros: ");
    scanf("%f", &raio);

comprimento = 2.0 * PI * raio;
area = PI * pow(raio, 2);
volume = (4.0/3.0) * PI * pow(raio, 3);

printf("O comprimento da sua circunferência é de: %0.2fm, \n", comprimento);
printf("A área da sua circunferência é de: %0.2fm2 e \n", area);
printf("O volume da sua esfera é de: %0.2fm3 \n", volume);


    return 0;
}