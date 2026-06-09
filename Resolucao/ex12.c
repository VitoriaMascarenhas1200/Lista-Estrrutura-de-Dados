#include <stdio.h>

void main(){
   int n, auxiliar = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    if(n % 2 == 0){
        for(int i = n + 1; auxiliar < 10; i++){
            if(i % 2 == 0){
                printf("%d ", i);
                auxiliar++;
            }
        }
    }else{
        printf("%d", n);
    }
}