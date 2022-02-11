#include <stdio.h>

struct ficha_aluno{
  char nome [100];
  char matricula [50];
  float prova_1, prova_2, prova_3;
};

struct ficha_aluno aluno[5];

int main (void){

int maior = 0, aux_maior_prova1 = 0, aux_maior_media = 0, aux_menor_media = 0, maior_mediageral = 0, menor_mediageral = 0;

float media_alunos[5], maior_media = 0, menor_media=0;

//recebendo fichas dos alunos
for(int i = 0; i<5; i++){
printf("\n----------Ficha %d° Aluno----------\n\n\n", i+1);

printf("Nome.....: ");
setbuf(stdin,NULL);
fgets(aluno[i].nome, 100, stdin);

printf("Matricula.....: ");
setbuf(stdin,NULL);
fgets(aluno[i].matricula, 50, stdin);

//colentando notas
setbuf(stdin,NULL);
printf("Nota prova 1.....: ");
scanf("%f", &aluno[i].prova_1);

setbuf(stdin,NULL);
printf("Nota prova 2.....: ");
scanf("%f", &aluno[i].prova_2);

setbuf(stdin,NULL);
printf("Nota prova 3.....: ");
scanf("%f", &aluno[i].prova_3);

//calculo da media de cada aluno por looping

media_alunos[i] += (aluno[i].prova_1 + aluno[i].prova_2 + aluno[i].prova_3)/3; 

}

//fazendo a verificação de quem tem a maior nota da prova 1

//no primeiro for, o looping vai fazer a varredura entre as notas dos alunos
for(int i = 0; i < 5; i++){

//esse if é respnsável por não permitir que seja impresso mais de uma nota no final da verificação, além de atribuir o valor da primeira posição do i a variável "maior".

//if de maior nota da prova 1
  if(i==0){
    maior = aluno[i].prova_1;
    maior_media = media_alunos[i];
    menor_media = media_alunos[i];  
  }

  if(aluno[i].prova_1 > maior){
    
    maior = aluno[i].prova_1;
    aux_maior_prova1 = i;
     }
  
  if(media_alunos[i] > maior_media){
        maior_media = media_alunos[i];
        aux_maior_media = i;
      }

  if(media_alunos[i] < menor_media){
        menor_media = media_alunos[i];
        aux_menor_media = i;
      }

    }


//impressões

printf("\n\n******** DADOS ********\n\n\n");

for(int i=0; i < 5; i++){

  if(media_alunos[i] >= 6.00){
    printf("\nA média do aluno %s foi %.2f e o status dele é APROVADO\n", aluno[i].nome, media_alunos[i]);
    }

      else{
       printf("\nA média do aluno %s foi %.2f e o status dele é REPROVADO\n", aluno[i].nome, media_alunos[i]);
}

}

printf("\nA maior nota da primeira prova é %d, e pertence ao aluno %s \n", maior, aluno[aux_maior_prova1].nome);

printf("\nA maior média geral foi %.2f, e pertence ao aluno %s\n", maior_media, aluno[aux_maior_media].nome);

printf("\nA menor média geral foi %.2f, e pertence ao aluno %s", menor_media, aluno[aux_menor_media].nome);

  return 0;
}
