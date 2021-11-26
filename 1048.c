#include <stdio.h>

int main(){
  
   float salario,reajuste,nSalario;
  
   scanf("%f",&salario);
  
  if (salario >= 0 && salario <= 400){

    reajuste = salario*0.15;
    nSalario = salario + reajuste;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",nSalario, reajuste);
    printf("Em percentual: 15 %%\n");

  }
  else{

      if (salario > 400 && salario <= 800){

        reajuste = salario*0.12;
        nSalario = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",nSalario,reajuste);
        printf("Em percentual: 12 %%\n");


        }
        else{

          if (salario > 800 && salario <= 1200){

            reajuste = salario*0.1;
            nSalario = salario + reajuste;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",nSalario,reajuste);
            printf("Em percentual: 10 %%\n");

          }
          else{

              if (salario > 1200 && salario <= 2000){
              reajuste = salario*0.07;
              nSalario = salario + reajuste;
              printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",nSalario,reajuste);
              printf("Em percentual: 7 %%\n");
            }
            else{

              reajuste = salario*0.04;
              nSalario = salario + reajuste;
              printf("Novo salario: %.2f\nReajuste ganho: %.2f\n", nSalario,reajuste);
              printf("Em percentual: 4 %%\n");

            }
          }
        }
      }
   return 0;
}
