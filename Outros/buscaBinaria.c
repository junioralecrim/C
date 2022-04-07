#include <stdio.h>

int main(void) {
  int n = 0, menor = 0, troca = 0, meioVetor = 0, numBusco = 0;
  
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  
  int vetor[n];

  for(int i = 0; i < n; i++){
    printf("Digite o %d° valor do vetor: ", i+1);
    scanf("%d", &vetor[i]);
    if(i == n-1){
      for(int j = 0; j<n; j++){
        printf(" [%d] ", vetor[j]);
      }
    }
  }

  //ordenação por selection sort
  for(int i = 0; i < n-1; i++){
    menor = i;
    for(int j = i+1; j < n; j++){
      if(vetor[j] < vetor[menor]){
        menor = j;
      }
      if(i != menor){
        troca = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = troca;        
      }
    }
  }

printf("\n\n");

  
for(int j = 0; j<n; j++){
  printf(" [%d] ", vetor[j]);
}  

//algoritimo de busca binária 
  
printf("Digite o número que você quer buscar no vetor para saber a sua posição: ");
scanf("%d", &numBusco);

  
if(n%2 == 0){ //aqui vai ser feita a verificação de se ele é par ou impar pra pegar o meio
  meioVetor = meioVetor + (n/2);  
} else {
  meioVetor = meioVetor + ((n-1)/2);
} //NOTA: preciso colocar isso dentro de um laço

//aqui eu preciso definir pra onde ele vai andar, se vai ser pra direita, esquerda ou se o número do meio já é oq eu busco.

//1. Se for o do meio, ele não vai mais rodar o vetor. (eu preciso fazer essa verificação toda vez que dividir)

  //NOTA: preciso colocar isso dentro de um laço
if(vetor[meioVetor] == numBusco){
  printf("O número %d está na posição %d do vetor.", numBusco, meioVetor);
} else {
  
}



  
  return 0;
}
