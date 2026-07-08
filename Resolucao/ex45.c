#include <stdio.h>

int main(){
    int primeiro,ultimo,razao;

    printf("Primeiro termo: ");
    scanf("%d",&primeiro);
    printf("Último termo: ");
    scanf("%d",&ultimo);
    printf("Razão: ");
    scanf("%d",&razao);
    int soma=0;

    for(int i=primeiro;i<=ultimo;i+=razao){
        soma+=i;
    }
    printf("Soma = %d",soma);
    return 0;
}