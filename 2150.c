#include <stdio.h>
#include <string.h>

unsigned short vogaisNum(char *, char *);

void main ()
{

    unsigned short i;
    char vogais[500], texto[1000];

    while (scanf(" %[^\n]", vogais) != EOF)
    {

        scanf(" %[^\n]", texto);
        printf("%hu\n", vogaisNum(vogais, texto));

        memset(vogais, 0, sizeof(vogais));
        memset(texto, 0, sizeof(texto));

    }

}

unsigned short vogaisNum(char *vogais, char *texto)
{

    unsigned short i, j;
    unsigned short vogaisNum2;

    i = 0;
    vogaisNum2 = 0;
    while (vogais[i])
    {

        j = 0;
        while (texto[j])
        {

            if (vogais[i] == texto[j])
                vogaisNum2++;

            j++;
        }

        i++;

    }
    return vogaisNum2;
}
