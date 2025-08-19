#include <stdio.h>

int main(){
float ct, at, cp, ap, totalparede, totaltijolo, quant_tijolo;

printf("Digite o comprimento do tijolo (m): ");
    scanf("%f", &ct);
printf("Digite a altura do tijolo (m): ");
    scanf("%f", &at);
    
printf("Digite o comprimento da parede (m): ");
    scanf("%f", &cp);
printf("Digite a altura da parede (m): ");
    scanf("%f", &ap);

totaltijolo = ct * at;
totalparede = cp * ap;
quant_tijolo = totalparede/totaltijolo;

printf("Serão necessários %.2f tijolos para construir essa parede. \n", quant_tijolo);

    return 0;
}