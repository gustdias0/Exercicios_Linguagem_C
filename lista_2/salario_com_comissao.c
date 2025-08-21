#include <stdio.h>

int main(){

float sfixo, vendas, comissao, sliquido;

printf("Digite qual seu salário fixo: R$");
    scanf("%f", &sfixo);

printf("Quanto você vendeu esse mês? R$");
    scanf("%f", &vendas);

comissao = vendas * (4.0/100.0);
sliquido = sfixo + comissao;

printf("Seu salário líquido esse mês somando com sua comissão nas vendas (R$%0.2f) fica no total de: R$%0.2f \n", comissao, sliquido);


    return 0;
}