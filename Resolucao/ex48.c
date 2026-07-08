#include <stdio.h>

int main(){
    float H,R;
    int N;

    printf("Altura: ");
    scanf("%f",&H);
    printf("Coeficiente: ");
    scanf("%f",&R);
    printf("Número de saltos: ");
    scanf("%d",&N);
    float distancia=H;
    float altura=H;

    for(int i=1;i<=N;i++){
        altura*=R;
        distancia+=2*altura;
    }
    printf("Distância = %.2f\n",distancia);
    printf("Altura do último salto = %.2f",altura);
    return 0;
}