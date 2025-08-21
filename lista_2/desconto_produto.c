#include <stdio.h>

int main(){

float valor, vd, valor_com_desconto;

printf("Digite o valor do produto que está comprando: R$");
    scanf("%f", &valor);

vd = valor * (10.0/100.0);
valor_com_desconto = valor - vd;

printf("O seu produto com 10%% de desconto (R$%0.2f) ficou por R$%0.2f", vd, valor_com_desconto);

    return 0;
}