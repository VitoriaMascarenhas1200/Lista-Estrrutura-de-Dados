#include <stdio.h>

#define PI 3.14159

int main(){
    float raio;

    printf("Raio: ");
    scanf("%f",&raio);
    printf("Volume = %.2f",(4.0/3.0)*PI*raio*raio*raio);
    return 0;
}