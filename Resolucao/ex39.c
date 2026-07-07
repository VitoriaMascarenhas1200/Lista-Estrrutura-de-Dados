#include <stdio.h>

int main(){
    float fabrica;

    printf("Custo de fabrica: ");
    scanf("%f",&fabrica);
    float consumidor = fabrica + fabrica*0.28 + fabrica*0.45;
    printf("Custo ao consumidor: R$ %.2f",consumidor);
    return 0;
}