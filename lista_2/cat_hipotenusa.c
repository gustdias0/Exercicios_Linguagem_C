#include <stdio.h>
#include <math.h>

int main(){

float cat1, cat2, hip;

printf("Digite o valor do primeiro cateto em metros: ");
    scanf("%f", &cat1);

printf("Agora do segundo cateto: ");
    scanf("%f", &cat2);

hip = pow(cat1, 2) + pow(cat2, 2);

printf("A hipotenusa do seu triângulo com cateto 1 valendo %0.2fm e o cateto 2 valendo %0.2f é: %0.2fm \n", cat1, cat2, sqrt(hip));
 
    return 0;
}