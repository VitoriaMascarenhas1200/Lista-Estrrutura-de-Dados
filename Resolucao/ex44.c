#include <stdio.h>

int main(){
    float f;

    printf("Celsius\tFahrenheit\n");
    for(int c=0;c<=50;c+=10){
        f=(9*c)/5.0+32;
        printf("%d\t%.1f\n",c,f);
    }
    return 0;
}