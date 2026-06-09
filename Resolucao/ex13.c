#include <stdio.h>

void main(){
    int n, auxiliar = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    for(int i = n + 1; auxiliar < 5; i++){
        printf("%d ", i);
        auxiliar++;
    }
}