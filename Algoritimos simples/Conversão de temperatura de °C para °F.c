#include <stdio.h>

int main(void) {
    
    //declaração das var
    double C, F;

   //impressão da pergunta e locação
    printf("Digite a temperatura em graus célcios para obter seu equivalente em Fahrenheit\n");
      
      scanf("%lf", &C);

      //fórmula e impressão da conversão
        F = C*(9.0/5.0)+32.0;

          printf("O resultado em Fahreheit é: %lf\n", F);
  
return 0;

}
