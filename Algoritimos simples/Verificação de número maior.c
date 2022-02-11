#include <stdio.h>

int main(void) {
 
 int N1, N2, N3;

  //entrada de dados

  
 printf("Olá! Vamos verificar qual dos números possui o maior valor? Lembrando que precisam ser inteiros e diferentes. Digite o primeiro número:\n");
  scanf("%d", &N1);

  printf("Certo. Agora digite o segundo número:\n");
  scanf("%d", &N2);

  printf("Muito bem! Agora digite o terceiro e último número:\n");
  scanf("%d", &N3);

  //processamento de verificação do maior valor
  

  { if ( N1 > (N2 | N3) )

    printf("O primeiro valor é o maior\n");

  if (N2 > (N1 | N3))
    printf("O segundo valor é o maior\n");
  
  if (N3 > (N2 | N1))
    printf("O terceiro valor é o maior\n");
    }



  return 0;
}

