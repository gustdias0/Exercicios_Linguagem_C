#include <stdio.h>

int main() {

    float invest1, invest2, invest3;
    float premio_total;
    float total_investido;
    float premio_apostador1, premio_apostador2, premio_apostador3;

    printf("Digite o valor que o primeiro apostador investiu: R$ ");
    scanf("%f", &invest1);

    printf("Digite o valor que o segundo apostador investiu: R$ ");
    scanf("%f", &invest2);

    printf("Digite o valor que o terceiro apostador investiu: R$ ");
    scanf("%f", &invest3);

    printf("Digite o valor total do premio da Mega Sena: R$ ");
    scanf("%f", &premio_total);


    total_investido = invest1 + invest2 + invest3;

    
    premio_apostador1 = (invest1 / total_investido) * premio_total;
    premio_apostador2 = (invest2 / total_investido) * premio_total;
    premio_apostador3 = (invest3 / total_investido) * premio_total;
    
    printf("O primeiro apostador, que investiu R$ %.2f, receberá R$ %.2f\n", invest1, premio_apostador1);
    printf("O segundo apostador, que investiu R$ %.2f, receberá R$ %.2f\n", invest2, premio_apostador2);
    printf("O terceiro apostador, que investiu R$ %.2f, receberá R$ %.2f\n", invest3, premio_apostador3);

    return 0;
}