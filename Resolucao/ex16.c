#include <stdio.h>

void main()
{   float idade[3], media, soma;
    for(int i = 0; i < 3; i++){
        printf("Digite sua idade: ");
        scanf("%f", &idade[i]);
        soma = soma + idade[i];
    }
    media = soma / 3;
    printf("Média das idades é %.2f", media);
}