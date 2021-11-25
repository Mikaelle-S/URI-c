#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct Fila {	
    char carta;
	struct Fila *prox;
};
typedef struct Fila f;

struct pilha { 	
    f *ini, *final;
	int num;
};
typedef struct pilha p;

int main()
{
	int descarte[55], cartaX, i=0, k=0;
	p	desc;
	f *aux;

	while (scanf("%d", &cartaX) && cartaX != 0)
	{
		for(i=0; i < 55; i++)
			descarte[i] = 0;

		k = 0;

		desc.ini = NULL;
		desc.num = 0;

		for(i=cartaX; i > 0; i--)
		{
			aux = (f *) malloc(sizeof(f));

			if(aux == NULL)
				break;

			aux->carta = i;
			aux->prox = desc.ini;

			desc.ini = aux;
			desc.num++;

			if(i == cartaX)
				desc.final = aux;
		}

		while (desc.num >= 2)
		{
			aux = desc.ini;
			desc.ini = aux->prox;
			descarte[k] = aux->carta;
			free(aux);
			desc.num--;
			k++;
			aux = desc.ini->prox;
			desc.final->prox = desc.ini;
			desc.final = desc.ini;
			desc.ini = aux;
		}

		printf("Discarded cards:");
		for(i=0; i < k; i++)
		{
			printf(" %d", descarte[i]);
			if(i != k-1)
				printf(",");
		}
		printf("\nRemaining card: %d\n", desc.final->carta);
	}

	return 0;
}
