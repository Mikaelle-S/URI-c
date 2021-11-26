#include <stdio.h>
 
int main() {
 
    char nome;
    double x,y;
    
    scanf("%s", &nome);
    scanf("%lf %lf",&x,&y);
   
    printf("TOTAL = R$ %.2f\n",(x+y*0.15));
 
    return 0;
}
