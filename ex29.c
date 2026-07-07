#include <stdio.h>

int main(){

    int dias;
    int acima20=0;
    int totalHospedes=0;
    float somaContas=0;
    float somaDias=0;
    float maiorConta=0;

    while(1){
        printf("Quantidade de diárias (igual a 0 encerra): ");
        scanf("%d",&dias);

        if(dias==0)
            break;
        float valor=dias*150;
        float desconto=0;
        if(dias<=5)
            desconto=0.05;
        else if(dias<=10)
            desconto=0.10;
        else
            desconto=0.15;
        valor=valor-(valor*desconto);
        printf("Conta = R$ %.2f\n",valor);

        if(dias>20)
            acima20++;
        if(valor>maiorConta)
            maiorConta=valor;
        somaContas+=valor;
        somaDias+=dias;
        totalHospedes++;
    }
    printf("\nHospedes acima de 20 dias: %d",acima20);

    if(totalHospedes>0){
        printf("\nMédia contas: %.2f",somaContas/totalHospedes);
        printf("\nMédia permanência: %.2f dias",somaDias/totalHospedes);
        printf("\nMaior conta: %.2f",maiorConta);
    }
    return 0;
}