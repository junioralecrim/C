
#include <stdio.h>
int main (void){

struct Agenda_do_mes{
  char horario [50];
  char data [50];
  char compromisso [100];
};
struct Agenda_do_mes compromisso;
fflush(stdin);

printf("\n----------Agenda do Mês----------\n\n\n");

printf("Compromisso.....: ");

fgets(compromisso.compromisso, 50, stdin);

printf("Data.....: ");
fflush(stdin);
fgets(compromisso.data, 50, stdin);

printf("horario.....: ");
fflush(stdin);
fgets(compromisso.horario, 50, stdin);

  return 0;

}
