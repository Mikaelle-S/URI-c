#include <stdio.h>
#include <math.h>

int main() {
    double area,raio,pi;
    scanf("%lf",&raio);
    
    pi = 3.14159;
    area = pow(raio,2)*pi;
    
    printf("A=%0.4lf\n",area);
 
    return 0;
}
