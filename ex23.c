#include <stdio.h>

int main() {
    float altura, maior = 0, menor = 999;
    float somaMulheres = 0;
    int sexo;

    int homens = 0;
    int mulheres = 0;
    int mulheresAbaixo = 0;

    while (1){
        printf("Digite a altura (menor que 0 encerra): ");
        scanf("%f", &altura);
        if (altura <= 0)
            break;
        printf("Sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);
        if (altura > maior)
            maior = altura;
        if (altura < menor)
            menor = altura;
        if (sexo == 1)
            homens++;
        else {
            mulheres++;
            somaMulheres += altura;
            if (altura < 1.68)
                mulheresAbaixo++;
        }
    }
    printf("\nMaior altura: %.2f", maior);
    printf("\nMenor altura: %.2f", menor);
    printf("\nHomens: %d", homens);
    if (mulheres > 0) {
        printf("\nMédia mulheres: %.2f", somaMulheres / mulheres);
        printf("\nNúmeros mulheres abaixo 1.68: %.2f%%",
               mulheresAbaixo * 100.0 / mulheres);
    }
    return 0;
}