#include <stdio.h>
#include <math.h>

void main(){
    int n, quadrado;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    quadrado = pow(n, 2);
    printf("O quadrado de %d é %d", n, quadrado);
}