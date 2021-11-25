#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool parenteses (char *);

void main ()
{

	char expressao[1100];

	while (scanf("%s", expressao) != EOF)
	{
		if(parenteses(expressao))
			printf("correct\n");
		else
			printf("incorrect\n");
	}
}
bool parenteses(char *verificar)
{

	short cont = 0;

	if (*verificar == ')')
		return false;

	while ((*verificar) && (cont >= 0))
	{

		if (*verificar == '(')
			cont++;
		if (*verificar == ')')
			cont --;
		verificar++;
	}

	if (cont == 0)
		return true;
	else
		return false;

}
