#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
    float catAd, catOp, hipotenusa, potencia, potenciaA, potenciaO, raiz;
    char hipo = 'h';
    
    printf("Digite o valor do Cateto Adjacente: ");
    scanf("%f", &catAd);
    printf("Digite o valor do Cateto Oposto: ");
    scanf("%f", &catOp);
    system("clear");
    potenciaA = pow(catAd, 2);
    potenciaO = pow(catOp, 2);
    potencia = potenciaA + potenciaO;
    raiz = sqrt(potencia);
    hipotenusa = raiz;
    printf("%c = %.2f² %.2f²\n", hipo, catAd, catOp);
    printf("%c = %2.f %2.f\n", hipo, potenciaA, potenciaO);
    printf("%c = √%2.f\n", hipo, potencia);
    printf("%c = %2.f\n", hipo, raiz);
    printf("A hipotenusa é %2.f cm", hipotenusa);
}