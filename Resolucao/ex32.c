#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){
    float raio;

    printf("Raio: ");
    scanf("%f",&raio);
    printf("Comprimento = %.2f",2*PI*raio);
    return 0;
}