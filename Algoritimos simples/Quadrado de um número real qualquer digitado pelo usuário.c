#include <stdio.h>
#include <math.h>
int main(void) {
    
    //declaração das var
    double base, potencia;

    //impressão e locação
    printf("Digite um número real qualquer para obter o seu quadrado equivalente\n");
      scanf("%lf", &base);
  
      potencia = pow (base,2);
    

      //impressão do resultado
      printf("O resultado da potenciação é: %lf\n", potencia);

return 0;

}
