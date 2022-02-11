#include <stdio.h>

int main(void) {
  
 int idade;

 printf("Digite sua idade para verificar se você é ou não de maior\n");
 scanf("%i", &idade);

 if ( 18 <= idade)
  printf("Maior de idade\n");
    else
      printf("Menor de idade");

  return 0;
}
