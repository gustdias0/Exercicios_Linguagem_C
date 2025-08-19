#include <stdio.h>

int main(){
    float tfar, tcel;
    
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &tfar);
    
    tcel = (tfar - 32) * 5.0 / 9.0;
    
    printf("Isso equivale a %.2f graus celsius\n", tcel);
    
    return 0;
}