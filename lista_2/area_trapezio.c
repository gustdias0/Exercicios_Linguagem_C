#include <stdio.h>

int main(){

float bmaior, bmenor, altura, area;

printf("Digite o valor em metros da base maior: ");
    scanf("%f", &bmaior);

printf("Digite o valor em metros da base menor: ");
    scanf("%f", &bmenor);

printf("Digite o valor da altura em metros: ");
    scanf("%f", &altura);

area = ((bmaior + bmenor) * altura)/2;

printf("Seu trapézio de base maior %0.2fm , base menor %0.2fm e altura %0.2fm tem a área de: %0.2fm2 \n", bmaior, bmenor, altura, area);

    return 0;
}