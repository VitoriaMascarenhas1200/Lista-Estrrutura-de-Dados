#include <stdio.h>
#include <math.h>
#include<stdlib.h>

void main(){
    int n[2], potencia[2];
    for(int i = 0; i < 2; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &n[i]);
    }
    system("clear");
    potencia[0] = pow(n[0], n[1]);
    potencia[1] = pow(n[1], n[0]);
    printf("%d elevado a %d é igual a %d\n", n[0], n[1], potencia[0]);
    printf("%d elevado a %d é igual a %d", n[1], n[0], potencia[1]);
}