#include <stdio.h>

int main(){
float km,litros, consumo_medio;
printf("Quantos Km você rodou com o carro?");
scanf("%f", &km);
printf("Quantos litros de gasolina foram usados?");
scanf("%f", &litros);
consumo_medio = km/litros;
printf("O consumo médio do seu carro foi: %.2f\n", consumo_medio);

};