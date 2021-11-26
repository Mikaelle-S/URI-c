#include <stdio.h>

int main()
{
    int e, d;
	scanf("%d %d", &e, &d);

	if(d - e >= 3){
	    printf("Muito bem! Apresenta antes do Natal!\n");
	}
	else if (d - e < 0){
	    printf("Eu odeio a professora!\n");
	}
	else if (d - e < 3){
	    printf("Parece o trabalho do meu filho!\n");
	    d += 2;
	    if (d <= 24){
	        printf("TCC Apresentado!\n");
	    }
	    else{
	        printf("Fail! Entao eh nataaaaal!\n");
	    }
	}

    return 0;
}
