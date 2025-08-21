#include <stdio.h>

int main(){
float n1, n2, n3, r;

printf("Digite o primeiro número: ");
    scanf("%f", &n1);

printf("Digite o segundo número: ");
    scanf("%f", &n2);

printf("Digite o terceiro número: ");
    scanf("%f", &n3);

r = n1 * n2 * n3;

printf("A multiplicação de %0.2f por %0.2f e %0.2f é igual a: %0.2f \n", n1, n2, n3, r);

    return 0;
}