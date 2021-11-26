#include <stdio.h>
#include <math.h>

int main() {
 
    double A,B,C,tri,cir,tra,quad,ret;
    scanf("%lf %lf %lf",&A,&B,&C);
    
    tri = A*C/2;
    cir = pow(C,2)*3.14159;
    tra = (A+B)*C/2;
    quad = pow(B,2);
    ret = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,quad,ret);
 
    return 0;
}
