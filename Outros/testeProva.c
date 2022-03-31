#include <stdio.h>

int somaPares(int n){
    if(n%2 == 0){
        return n + somaPares(n-2);
    } else {
        n = n-1;
        return n + somaPares(n-2);
    }
}


int main(void){

    int numero = 0, result = 0;

    printf("Digite um numero qualquer para obter a soma dos pares dele ate 0: ");
    scanf("%d", &numero);

    result = somaPares(numero);

    printf("O resultado é: %d", numero);

}
