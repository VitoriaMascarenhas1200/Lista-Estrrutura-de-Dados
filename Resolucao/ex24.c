#include <stdio.h>

int main() {
    float soma = 0;

    for(int i=1;i<=50;i++){
        soma += (51-i)/(float)i;
    }
    printf("Somatório = %.2f", soma);
    return 0;
}