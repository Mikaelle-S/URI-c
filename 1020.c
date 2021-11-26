#include <stdio.h>

int main() {
    
    int numero,ano,mes,dia;
    
    scanf("%d",&numero);
    
    ano = numero/365;
    mes = (numero%365)/30;
    dia = (numero%365)%30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
    
    return 0;
}
