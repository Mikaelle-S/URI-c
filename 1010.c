#include <stdio.h>

int main() {
    
    int codigo1,codigo2,numeroPeca1,numeroPeca2;
    double preco1,preco2;
    
    scanf("%d %d %lf", &codigo1,&numeroPeca1,&preco1);
    scanf("%d %d %lf",&codigo2,&numeroPeca2,&preco2);
    printf("VALOR A PAGAR: R$ %.2f\n",(numeroPeca1*preco1)+(numeroPeca2*preco2));
    
    return 0;
}
