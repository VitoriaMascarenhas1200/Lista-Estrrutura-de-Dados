#include <stdio.h>

int main(){
    int anos, cigarrosDia;
    float precoCarteira;

    printf("Quantos anos fumando: ");
    scanf("%d",&anos);
    printf("Quantos cigarros por dia: ");
    scanf("%d",&cigarrosDia);
    printf("Preço da carteira: ");
    scanf("%f",&precoCarteira);
    float totalCarteiras = (anos*365*cigarrosDia)/20.0;
    printf("Total gasto com cigarros: R$ %.2f",totalCarteiras*precoCarteira);
    return 0;
}