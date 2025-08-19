#include <stdio.h>

int main(){

float nlados, angint, angext;

printf("Digite o número de lados do poligono: ");
    scanf("%f", &nlados);

angint = (nlados - 2) * 180;
angext = (nlados + 2) * 180;

printf("A soma dos ângulos internos desse poligono é: %.2f \n", angint);
printf("E a soma dos ângulos externos desse poligono é: %.2f \n", angext);

    return 0;
}