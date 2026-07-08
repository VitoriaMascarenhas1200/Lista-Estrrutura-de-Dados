#include <stdio.h>

int main(){
    float c,f;

    printf("Fahrenheit: ");
    scanf("%f",&f);
    c = (5*(f-32))/9;
    printf("Celsius = %.2f",c);
    return 0;
}