#include <stdio.h>

int main(){
    float inicio,fim,litros,preco;

    printf("Odômetro inicial: ");
    scanf("%f",&inicio);
    printf("Odômetro final: ");
    scanf("%f",&fim);
    printf("Litros gastos: ");
    scanf("%f",&litros);
    printf("Preço combustível: ");
    scanf("%f",&preco);
    float km = fim-inicio;

    printf("Quilometragem: %.2f km\n",km);
    printf("Consumo: %.2f km/L\n",km/litros);
    printf("Custo: R$ %.2f",litros*preco);
    return 0;
}