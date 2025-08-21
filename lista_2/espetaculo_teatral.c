#include <stdio.h>

int main(){
float custoesp, pconvite, quant_convites;

printf("Digite o valor do espetáculo: R$");
    scanf("%f", &custoesp);

printf("Por quanto serão vendidos os convites? R$");
    scanf("%f", &pconvite);

quant_convites = custoesp / pconvite;

printf("Serão necessários %0.0f convites vendidos para custear o espetáculo. \n", quant_convites);

    return 0;
}