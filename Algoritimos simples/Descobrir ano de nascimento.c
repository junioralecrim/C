#include <stdio.h>
int main(void) {
    
    //declaração das var
    int  I, A, AN;

  printf("Vou descobrir o ano em que você nasceu! Digite a sua idade:\n");
    
    scanf("%d", &I);

  printf("Muito bem! Agora diga em que ano você está:\n");

    scanf("%d", &A);

  AN = A - I; 

  printf("Você nasceu em: %d", AN);
  

return 0;

}
