#include <stdio.h>

void main(){
    int n[2], mult, i = 0;
    
    for(i; i < 2; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &n[i]);
    }
    mult = n[0] * n[1];
    printf("%d x %d = %d", n[0], n[1], mult);
}