#include <stdio.h>
#include <stdlib.h>

void main(){
    int n[2]; 
    for(int i = 0; i <2; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &n[i]);
        system("clear");
    }
    printf("%d %% %d = %d de resto ", n[0], n[1], n[0] % n[1]);
}