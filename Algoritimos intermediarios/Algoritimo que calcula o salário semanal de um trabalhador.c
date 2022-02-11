#include <stdio.h> 

int main(void){

//declaracao de variaveis do tipo float

float num_horas=0, valor_horas=0;

//recebimento de valores
printf("Digite o valor da quantidade de horas trabalhadas na semana: ");
scanf("%f", &num_horas);
printf("Digite o valor do salário p/hora: ");
scanf("%f", &valor_horas);

//condicionais de cálculo

//primeira condicional: calculo de salario sem adicional
if(num_horas <= 40)
    printf("O seu salário é de: %.2f. Sem adicional.", num_horas * valor_horas);
   

    else{
            //segunda condicional: calculo de salario com o acrescimo de 50% por hora a cima de 40 trabalhada             
                if ((num_horas > 40) && (num_horas <= 60)) 
                
                    printf("O seu salário é de: %.2f. Com o adicional de cinquenta por cento.", ((40 * valor_horas) + (((num_horas - 40) * valor_horas) * 0.5)));
                
                        else
                        //terceira e ultima condioional: calculo de salario mais acrescimo de 50% por hora a cima de 40 trabalhada e acrescimo de 100% por cada hora a cima de 60 trabalhada
                           
                            if (num_horas > 60)
                            
                                printf("O seu salário é de: %.2f. Com o adicional de cem por cento por hora a cima das sessenta.", ((valor_horas*40) + ((valor_horas*20) + (valor_horas * 0.5)) + (((num_horas - 60) * (valor_horas)) * 2)));

                
        }
            
return 0;
}

