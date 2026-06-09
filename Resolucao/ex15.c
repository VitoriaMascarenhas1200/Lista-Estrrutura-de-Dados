#include <stdio.h>
#include <stdlib.h>

void main(){   
    float notas[5], media, soma;
    for(int i = 0; i < 5; i++){
        printf("Digite sua %d° nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma / 5;
    system("clear");
    printf("Sua média foi %.2f", media);
}