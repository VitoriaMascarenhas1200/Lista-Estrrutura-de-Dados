#include <stdio.h>

void main(){   
    int n;
    for(int i = 0; i < 5; i++){
        printf("Digite um número: ");
        scanf("%d", &n);
        printf("%d\n", n);
    }
}