#include <stdio.h>
#include<stdlib.h>

void main(){
    int n[5], positivo = 0, negativo = 0, zero = 0;
    for(int i = 0; i < 5; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &n[i]);
            
            positivo += (n[i] > 0);
            negativo += (n[i] < 0); 
            zero += (n[i] == 0);
            system("clear");
        }
        printf("Números Postivo -> %d\nNúmeros Negativos -> %d\nZero -> %d", positivo, negativo, zero);
}