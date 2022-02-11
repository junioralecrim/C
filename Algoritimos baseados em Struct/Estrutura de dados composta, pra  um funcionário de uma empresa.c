

#include <stdio.h>

struct dados_funcionario{
  char nome [100];
  char idade [50];
  char sexo [1];
  int cod_setor;
  char cargo[30];
  char salario[15];
};
struct dados_funcionario funcionario;

int main (void){

printf("\n----------Ficha Funcionário----------\n\n\n");

printf("Nome.....: ");
setbuf(stdin,NULL);
fgets(funcionario.nome, 100, stdin);

printf("Idade.....: ");
setbuf(stdin,NULL);
fgets(funcionario.idade, 50, stdin);

printf("Sexo (M/F).....: ");
setbuf(stdin,NULL);
fgets(funcionario.sexo, 50, stdin);

printf("Codígo do Setor (0-99).....: ");
scanf("%d", &funcionario.cod_setor);

  if((funcionario.cod_setor < 0) || (funcionario.cod_setor > 99)){
    printf("\nCódigo do setor INVÁLIDO! Reinicie o programa e digite um código válido (0-99)");
    return 0;
  } 
  
    else

printf("Cargo.....: ");
setbuf(stdin,NULL);
fgets(funcionario.cargo, 50, stdin);

printf("Salário.....: ");
setbuf(stdin,NULL);
fgets(funcionario.salario, 50, stdin);

//printf

printf("\n----------Dados Ficha do Funcionário----------\n\n\n");

printf("Nome.....: %s", funcionario.nome);
printf("Idade.....: %s", funcionario.idade);
printf("Sexo (M/F).....: %s", funcionario.sexo);
printf("Codígo do Setor.....: %d", funcionario.cod_setor);
printf("Cargo.....: %s",  funcionario.cargo) ;
printf("Salário.....: %s", funcionario.salario);

  return 0;
}
