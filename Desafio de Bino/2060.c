#include <stdio.h>

int main(){

    int num, num2, i, cont=0, cont2=0, cont3=0, cont4=0;

    scanf("%d", &num);

    for(i=0; i<num; i++){
        
        scanf("%d", &num2);
        if(num2 % 2 == 0) 
            cont++;
        if(num2 % 3 == 0)  
            cont2++;
        if(num2 % 4 == 0) 
            cont3++;
        if(num2 % 5 == 0) 
            cont4++;

    }

    printf("%d Multiplo(s) de 2\n", cont);

    printf("%d Multiplo(s) de 3\n", cont2);

    printf("%d Multiplo(s) de 4\n", cont3);

    printf("%d Multiplo(s) de 5\n", cont4);

    return 0;
}
