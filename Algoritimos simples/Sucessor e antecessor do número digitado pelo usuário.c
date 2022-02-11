Questão 31:
#include <stdio.h>
int main(void) {
    
    //declaração das var
    int result1, result2, aux;

  printf("Digite um número para obter tanto o seu sucessor quanto o seu antecessor\n");
    
    scanf("%d", &aux);

  result1 = aux + 1;
  result2 = aux - 1;

  printf("Sucessor: %i\n", result1);
  printf("Antecessor: %i\n", result2);
 

return 0;

}
