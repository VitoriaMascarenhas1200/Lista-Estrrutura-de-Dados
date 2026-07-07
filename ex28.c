#include <stdio.h>

int main(){

    float altura;
    int sexo;

    float somaMulher=0;
    float somaTotal=0;

    int mulheres=0;
    int homens=0;
    int abaixo=0;

    for(int i=1;i<=50;i++){
        printf("Pessoa %d\n",i);
        printf("Altura: ");
        scanf("%f",&altura);
        printf("Sexo (0-M 1-F): ");
        scanf("%d",&sexo);
        somaTotal+=altura;

        if(sexo==0){
            homens++;
        }else{
            mulheres++;
            somaMulher+=altura;

            if(altura<1.65)
                abaixo++;
        }
    }
    printf("\nMédia mulheres: %.2f",somaMulher/mulheres);
    printf("\nMédia população: %.2f",somaTotal/50.0);
    printf("\nPercentual homens: %.2f%%",homens*100.0/50);
    printf("\nQuantidade mulheres: %d",mulheres);
    printf("\nPercentual mulheres abaixo 1.65: %.2f%%",abaixo*100.0/mulheres);
    return 0;
}