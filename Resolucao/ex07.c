#include <stdio.h>
#include <math.h>

void main(){
    int n, quadrado;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    quadrado = n * n;
    printf("O quadrado de %d é %d", n, quadrado);
}