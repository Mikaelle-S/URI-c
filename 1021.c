#include <stdio.h>
 
int main() {

    double n,m,o;
    int valor,a,b,c,d,e,f,A,B,C,D,E,F;
    int n100, n50, n20, n10, n5, n2;
    int m1, m050, m025, m010, m005, m001;
    
    scanf("%lf",&n);
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
    m1 = f/1;
    m=n*100;
    A = (int) m;
    B = A%100;
    m050 = B/50;
    C = B%50;
    m025 = C/25;
    D = C%25;
    m010 = D/10;
    E = D%10;
    m005 = E/5;
    F = E%5;
    m001 = F/01;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",m1);
    printf("%d moeda(s) de R$ 0.50\n",m050);
    printf("%d moeda(s) de R$ 0.25\n",m025);
    printf("%d moeda(s) de R$ 0.10\n",m010);
    printf("%d moeda(s) de R$ 0.05\n",m005);
    printf("%d moeda(s) de R$ 0.01\n",m001);

    return 0;
}
