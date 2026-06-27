#include <stdio.h>
#include<stdlib.h>

void main(){
    int n[10], par = 0, impar = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &n[i]);
            par += (n[i] % 2 == 0);
            impar += (n[i] % 2 != 0); 
            system("clear");
        }
        printf("Números Par -> %d\nNúmeros Impar -> %d", par, impar);
}