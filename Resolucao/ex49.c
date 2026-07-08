#include <stdio.h>

int main(){
    int uso;
    int total=0;
    int m10=0;
    int e1015=0;
    int a15=0;

    while(1){
        scanf("%d",&uso);

        if(uso<0)
            break;
        total++;
        if(uso<10)
            m10++;
        else if(uso<=15)
            e1015++;
        else
            a15++;
    }

    printf("Menos de 10: %.2f%%\n",m10*100.0/total);
    printf("Entre 10 e 15: %.2f%%\n",e1015*100.0/total);
    printf("Acima de 15: %.2f%%\n",a15*100.0/total);
    printf("Entrevistados: %d",total);
    return 0;
}