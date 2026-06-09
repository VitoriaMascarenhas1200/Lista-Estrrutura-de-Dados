#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
    int n[2], expo[2]; 
    for(int i = 0; i <2; i++){
        printf("Digite %d° número: ", i + 1);
        scanf("%d", &n[i]);
        system("clear");
    }
    expo[0] = pow(n[0], n[1]);
    expo[1] = pow(n[1], n[0]);
    printf("%d ^ %d -> %d\n%d ^ %d -> %d", n[0], n[1], expo[0], n[1], n[0], expo[1]);
}