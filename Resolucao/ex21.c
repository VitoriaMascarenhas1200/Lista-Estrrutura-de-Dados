#include <stdio.h>
#include<stdlib.h>

void main(){
    int n[2];
    int produto;
    
    for(int i = 0; i < 2; i++){
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &n[i]);
        system("clear");
    }
    for(int j = 0; j < n[1] - 1; j++){
        printf("%d + ", n[0]);
    }
    produto = n[0] * n[1];
    printf("%d = %d",n[0], produto);
}