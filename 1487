#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct play{

	unsigned short tempo;
	unsigned short pontos;
	double PontoTempo;

} play;

int compara(play*a, play*b);

void main ()
{
	unsigned short i;
	unsigned short instancia;
	unsigned short atracoes;
	unsigned short lim, aux;
	unsigned short pontoTotal, tempoTotal;

	instancia = 0;
	while (true)
	{
		scanf("%hu %hu", &atracoes, &lim);
		if (atracoes == 0)
			break;
		play plays[atracoes];
		for (i = 0; i < atracoes; ++i)
		{
			scanf("%hu %hu", &plays[i].tempo, &plays[i].pontos);
			plays[i].PontoTempo = (plays[i].pontos / (double)plays[i].tempo);
		}
		qsort(plays, atracoes, sizeof(play), compara);
		i = 0;
		pontoTotal = tempoTotal = 0;
		while (i < atracoes)
		{
			aux = tempoTotal + plays[i].tempo;
			if (aux <= lim)
			{
				pontoTotal += plays[i].pontos;
				tempoTotal = aux;
			}
			else
				i++;
		}
		printf("Instancia %hu\n%hu\n\n", ++instancia, pontoTotal);
	}
}

int compara(play*a, play*b)
{
	if (a->PontoTempo == b->PontoTempo)
		return 0;
	else if (a->PontoTempo > b->PontoTempo)
		return -1;
	else
		return 1;
}
