#include <stdio.h>

int main(){

int var1, var2, var12, var21;

printf("Digite o valor da primeira variavél: ");
    scanf("%d", &var1);
printf("Digite a segunda variável: ");
    scanf("%d", &var2);

var21 = var1;
var12 = var2;

printf("A primeira variavél é: %d , porem colocando a variavel 2 no lugar fica: %d \n", var1, var12);
printf("A segunda variavél é: %d , porém colocando a primeira variavel no lugar fica: %d \n", var2, var21);

    return 0;
}