#include <stdio.h>

struct ficha_aluno{
  char nome [100];
  char matricula [50];
  char curso [100];
};
struct ficha_aluno aluno[3];

int main (void){

for(int i = 0; i<3; i++){
printf("\n----------Ficha %d° Aluno----------\n\n\n", i+1);

printf("Nome.....: ");

fgets(aluno[i].nome, 40, stdin);

printf("Matricula.....: ");
fflush(stdin);
fgets(aluno[i].matricula, 40, stdin);

printf("Curso.....: ");
fflush(stdin);
fgets(aluno[i].curso, 50, stdin);

}

printf("\n\n********* Dados dos alunos do curso de ADS *********\n\n\n");

for(int i = 0; i<3; i++){

printf("\n---------- %d° aluno ----------\n\n\n", i+1);

printf("Nome.....: %s", aluno[i].nome);

printf("Idade.....: %s", aluno[i].matricula);

printf("Endereço.....: %s", aluno[i].curso);

}

  return 0;

}
