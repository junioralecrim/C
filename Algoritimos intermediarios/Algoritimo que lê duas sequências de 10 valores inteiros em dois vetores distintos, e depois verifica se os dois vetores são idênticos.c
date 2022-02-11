#include <stdio.h>

int main (void)
    {
//declarando variáveis e vetores

int static valor1 = 10, valor2 = 10;
int vetor1[valor1], vetor2[valor2];

//recebendo os valores

for (int i = 0; i < 10; i++)
{
    printf("Digite o %d valor para o grupo 1:\n", i+1);
    scanf("%d", &vetor1[valor1]);
}

for (int i = 0; i < 10; i++)
{
    printf("Digite o %d valor para o grupo 2:\n", i+1);
    scanf("%d", &vetor2[valor2]);
}

//verificando se os vetores são idênticos

if (vetor1[valor1] == vetor2[valor2])

    printf("Os dois grupos possuem os mesmos valores.\n");
        else
            printf("Algum grupo possui valores ou posições distintas do outro.\n");
return 0;
    }
