#include <stdio.h>

    int main(void){
        int numero, soma, digito;

        printf("Digite um número inteiro qualquer para obter a soma de seus algarismos:\n");
        scanf("%d", &numero);

        soma = 0;

        if (numero <=0 ){
            printf("O número digitado é nulo ou negativo\n");
                return 0;}
                    
                    else
        
        while (numero > 0)
        {
            digito = numero % 10;
            soma = soma + numero;
            numero = numero / 10;
        }

        printf("A soma dos algarismos do número inserido é: %d\n", soma);

        return 0;
    }

