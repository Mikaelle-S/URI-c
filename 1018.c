#include <stdio.h>
 
int main() {
    
    int valor,a,b,c,d,e,n,m,o,f,A,B,C,D,E,F;
    int n100, n50, n20, n10, n5, n2,n1;
    
    scanf("%d",&n);
    valor= n;
    n100 = valor/100;
    a = valor%100;
    n50 = a/50;
    b = a%50;
    n20 = b/20;
    c = b%20;
    n10 = c/10;
    d = c%10;
    n5 = d/5;
    e = d%5;
    n2 = e/2;
    f = e%2;
    n1 = f/1;
 
    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);

    return 0;
}
