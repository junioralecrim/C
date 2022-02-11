#include <stdio.h> 

int main(void){

    float num_1 = 0, num_2 = 0;
    char operador;

    printf("Digite o primeiro numero:\n");
    scanf("%f", &num_1);

    printf("Agora digite um dos operadores:\n+ - * /\n");
    scanf("%s", &operador);

    printf("Digite o outro numero:\n");
    scanf("%f", &num_2);

    switch (operador)
    {
    case '+':
        printf("A soma dos numeros digitados eh: %.2f", num_1 + num_2);
        break;

    case '-':
        printf("A subtração dos numeros digitados eh: %.2f", num_1 - num_2);
        break;

    case '*':
        printf("O produto dos numeros digitados eh: %.2f", num_1 * num_2);
        break;

    case '/':
        printf("O resultado da divisão dos numeros digitados eh: %.2f", num_1 / num_2);
        break;

    default:
        printf("Você digitou uma opção inválida no operador.");
        break;
    }

}

