#include <stdio.h>

#define PI 3.14159

int main(){
    float raio,altura;

    printf("Raio: ");
    scanf("%f",&raio);
    printf("Altura: ");
    scanf("%f",&altura);
    printf("Volume = %.2f",PI*raio*raio*altura);
    return 0;
}