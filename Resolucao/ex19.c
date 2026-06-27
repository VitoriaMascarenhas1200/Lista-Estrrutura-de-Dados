#include <stdio.h>
#include<stdlib.h>

void main(){
    int n[5], positivo = 0;
    for(int i = 0; i < 5; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &n[i]);
            positivo += (n[i] > 0);
            system("clear");
        }
        printf("Números postivo = %d", positivo);
}