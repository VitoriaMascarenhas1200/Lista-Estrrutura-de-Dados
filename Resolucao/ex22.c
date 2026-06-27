#include <stdio.h>
#include <stdlib.h>

void main(){
      int n, escolha;
      
      do{
      printf("Digite um número: ");
      scanf("%d", &n);
      system("clear");
      for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", n, i, n*i);
      }
      printf("\nDeseja continuar 1-SIM? 0-NÃO: ");
      scanf("%d", &escolha);
      system("clear");
      }while(escolha == 1);
}