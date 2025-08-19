#include <stdio.h>

int main(){

float ndias, salario, ir, sliquido;

printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f", &ndias);

salario = (ndias * 80);
ir = 0.08 * salario;
sliquido = salario - ir;

printf("O salário líquido do funcionário esse mês será: R$ %.2f \n", sliquido);



    return 0;
}