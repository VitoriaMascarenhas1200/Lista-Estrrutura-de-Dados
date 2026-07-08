#include <stdio.h>
#include <math.h>

int main(){
    float x1,y1,x2,y2;

    printf("X1 Y1: ");
    scanf("%f %f",&x1,&y1);
    printf("X2 Y2: ");
    scanf("%f %f",&x2,&y2);
    float distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("Distância = %.2f",distancia);
    return 0;
}