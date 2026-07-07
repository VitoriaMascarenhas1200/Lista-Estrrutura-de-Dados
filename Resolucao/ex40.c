#include <stdio.h>
#include <math.h>

int main(){
    int A,B,C;

    printf("Digite os valores de A B C: ");
    scanf("%d %d %d",&A,&B,&C);
    int R = pow(A+B,2);
    int S = pow(B+C,2);
    float D = (R+S)/2.0;
    printf("Resultado D = %.2f",D);
    return 0;
}