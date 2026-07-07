#include <stdio.h>

int main(){
    float largura, comprimento;
    float areaTotal = 0;

    int continuar = 1;

    while(continuar){
        printf("Digite a largura: ");
        scanf("%f",&largura);
        printf("Digite o comprimento: ");
        scanf("%f",&comprimento);
        areaTotal += largura*comprimento;
        printf("Continuar? (1-Sim 0-Nao): ");
        scanf("%d",&continuar);
    }
    printf("\nÁrea Total = %.2f m²",areaTotal);
    return 0;
}