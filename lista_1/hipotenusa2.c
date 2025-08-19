#include <stdio.h>
#include <math.h>

int main(){

float cateto1,cateto2,chip, hip;

printf("Digite o primeiro cateto: ");
    scanf("%f", &cateto1);

printf("Digite o segundo cateto: ");
    scanf("%f", &cateto2);

chip = pow(cateto1, 2) + pow(cateto2, 2);
hip = sqrt(chip);

printf("A hipotenusa é: %.2f\n", hip);





    return 0;
};