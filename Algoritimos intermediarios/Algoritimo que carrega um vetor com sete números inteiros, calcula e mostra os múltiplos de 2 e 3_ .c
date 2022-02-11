#include <stdio.h>

int main (void)
    {

 int static v1 = 7, v2 = 7;

 int vetor[v1], vetor2[v2];

//for para capturar os valores digitados pelo usuário
 for (int i = 0; i < v1; i++){
   printf("Digite o %d valor: ", i+1);
   scanf("%d", &vetor[i]);
 }

 printf("\nMultiplos de 2 e 3:\n");

//for para imprimir os múltiplos de 2 e 3
 for (int i = 0; i < v1; i++)
 {
    if((vetor[i] % 2 == 0) && (vetor[i] % 3 == 0))
        printf("[%d] ", vetor[i]);
 }
 
printf("\n\nMultiplos de 2:\n");

//for para imprimir os múltiplos de 2
 for (int i = 0; i < v1; i++)
 {
    if(vetor[i] % 2 == 0)
        printf("[%d] ", vetor[i]);
 }

printf("\n\nMultiplos de 3:\n");

//for para imprimir os múltiplos de 3
 for (int i = 0; i < v1; i++)
 {
    if(vetor[i] % 3 == 0)
        printf("[%d] ", vetor[i]);
 }

//dizer ao usuario quando não tem nenhum vetor multiplo de 2 e 3

for (int i = 0; i < v1; i++){
if ((vetor[i] % 2 != 0) && (vetor[i] % 3 != 0) && (i > 5))
{
  printf("\nNenhum dos valores digitados corresponde a algum múltiplo de 2 ou 3\n");
  return 0;
}

}

return 0;
    }

