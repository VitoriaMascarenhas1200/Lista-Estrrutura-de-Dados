#include <stdio.h>

int main(){
    char nome[50];
    int horas,dependentes;

    printf("Nome: ");
    scanf(" %[^\n]",nome);
    printf("Horas trabalhadas: ");
    scanf("%d",&horas);
    printf("Dependentes: ");
    scanf("%d",&dependentes);
    float bruto = horas*3 + dependentes*100;
    float liquido = bruto-(bruto*0.135);

    printf("\nFuncionário: %s",nome);
    printf("\nSalário líquido : R$ %.2f",liquido);
    return 0;
}