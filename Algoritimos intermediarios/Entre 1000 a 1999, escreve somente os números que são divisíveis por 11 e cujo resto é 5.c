#include <stdio.h> 

int main(void){

int count = 2000, resto = 0;

printf("Os números divisíveis por 11 e com resto 5 entre 1000 e 2000 são:\n");

for (int i = 1000; i < count; i++)
{

    if(i % 11 == 5){
      printf("%d\n", i);
    }
}

return 0;
}
