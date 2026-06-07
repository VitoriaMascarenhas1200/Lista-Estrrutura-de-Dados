#include <stdio.h>

void main(){
    int n[2], soma, i = 0;
    
    for(i; i < 2; i++){
        printf("Digite um número: ");
        scanf("%d", &n[i]);
    }
    soma = n[0] + n[1];
    printf("%d + %d = %d", n[0], n[1], n[i]);
}