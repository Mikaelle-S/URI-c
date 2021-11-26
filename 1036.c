#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, D, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);

    if((pow(B,2) - 4 * A * C) < 0 || A == 0){
        printf("Impossivel calcular\n");
    }
    else{
        D = sqrt(pow(B,2) - 4 * A * C);
        R1 = ((-B + D) / (2 * A));
        R2 = ((-B - D) / (2 * A));
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }
    return 0;
}
