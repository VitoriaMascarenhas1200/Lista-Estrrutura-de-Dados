#include <stdio.h>
#include <math.h>

void main(){
    double n, raiz, raiz_negativa;
    
    printf("Digite um número: ");
    scanf("%lf", &n);
    if(n >= 0){
        raiz = sqrt(n);
        printf("Raiz quadrada de %.1lf é %.1lf", n, raiz);
    }
    else{
        printf("Não existe raiz de um número negativo! ");
    }
}