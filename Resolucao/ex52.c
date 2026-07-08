#include <stdio.h>

int main(){
    int idade, acidente;
    float salario;
    int pessoas=0;
    int acidentados=0;
    int somaIdade=0;
    float totalLiquido=0;

    while(1){
        printf("Idade: ");
        scanf("%d",&idade);
        printf("Salário: ");
        scanf("%f",&salario);
        if(salario<0)
            break;
        printf("Acidente (1-Sim 0-Nao): ");
        scanf("%d",&acidente);

        float liquido;
        if(salario>1500)
            liquido=salario*0.90;
        else
            liquido=salario;
        totalLiquido+=liquido;
        pessoas++;
        if(acidente){
            somaIdade+=idade;
            acidentados++;
        }
    }
    if(acidentados>0)
        printf("\nMédia idade: %.2f",(float)somaIdade/acidentados);
    printf("\nTotal salários líquidos: R$ %.2f",totalLiquido);
    return 0;
}