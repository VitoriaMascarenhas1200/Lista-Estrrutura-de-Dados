#include <stdio.h>

#define PI 3.14159

int main(){
    float raio;

    printf("Raio: ");
    scanf("%f",&raio);
    printf("Área = %.2f",PI*raio*raio);
    return 0;
}