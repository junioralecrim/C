#include <stdio.h>

struct ficha_aluno{
  char nome [100];
  char matricula [50];
  char cod_disciplina [20];
  float prova_1, prova_2;
};
struct ficha_aluno aluno[2];

int main (void){

float media_alunos[3];

//recebendo fichas dos alunos
for(int i = 0; i<2; i++){
printf("\n----------Ficha %d° Aluno----------\n\n\n", i+1);

printf("Nome.....: ");
setbuf(stdin,NULL);
fgets(aluno[i].nome, 100, stdin);

printf("Matricula.....: ");
setbuf(stdin,NULL);
fgets(aluno[i].matricula, 50, stdin);

printf("Codígo da Disciplina.....: ");
setbuf(stdin,NULL);
fgets(aluno[i].cod_disciplina, 50, stdin);

//colentando notas

printf("Nota prova 1.....: ");
scanf("%f", &aluno[i].prova_1);

printf("Nota prova 2.....: ");
scanf("%f", &aluno[i].prova_2);

//calculo da media de cada aluno por looping

media_alunos[i] += ( aluno[i].prova_1 + (aluno[i].prova_2*2) )/3; 

}

//fazendo a verificação de quem tem a maior nota da prova 1

//no primeiro for, o looping vai fazer a varredura entre as notas dos alunos


//impressões

printf("\n\n******** DADOS ********\n\n\n");

for(int i=0; i < 2; i++){

    printf("\nAluno: %s Média: %.2f\n", aluno[i].nome, media_alunos[i]);

}

  return 0;
}
