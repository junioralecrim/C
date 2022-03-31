#include <stdio.h>

int soma(int a){
  if(a == 0){
    return a;
  } else {
    return a + soma(a - 1);
    printf("A = %d", a);
  }
}

int main(void) {
  int resultado = 0, valor = 0;
  
  printf("Olá! Digite um valor qualquer para receber a soma de todos os valores do número digitado até o 0: \n");
  scanf("%d", &valor);
  resultado = soma(valor);

  printf("O valor da soma de %d até 0 é: %d", valor, resultado);
  
  
  
  return 0;
}