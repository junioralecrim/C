#include <stdio.h>

int main (void)
    {

 int static v1 = 5;

 int vetor[v1], aux = 0;

//for para capturar os valores digitados pelo usuário
 for (int i = 0; i < v1; i++){
   printf("Digite o %d valor: ", i+1);
   scanf("%d", &vetor[i]);
 }

   printf("\nAgora digite um dos valores digitados anteriormente para descubrir sua posição dentro do vetor: ");
   scanf("%d", &aux);

//dizer ao usuario quando não tem nenhum vetor multiplo de 2 e 3

for (int i = 0; i < v1; i++){
    if (vetor[i] == aux)

        { 
        printf("\n%d° posição", i+1);
        return 0;
        }
    }

for (int i = 0; i < v1; i++){
    if (vetor[i] != aux)

        {
          printf("\nO valor digitado não está no vetor");
          return 0;
        }

    }

return 0;

    }
