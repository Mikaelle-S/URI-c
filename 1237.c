#include <stdio.h>
#include <string.h>
#define max(x, y) ((x) > (y) ? (x) : (y))

int Substring(char *string1, char *string2, int n1, int n2)
{

    int casos[51][51];
    int resultado = 0;
    int i, j;


    for (i = 0; i <= n1; ++i) {
        for (j = 0; j <= n2; ++j) {
            if (!i || !j)
                casos[i][j] = 0;
            else if (string1[i-1] == string2[j-1]) {
                casos[i][j] = casos[i-1][j-1] + 1;
                resultado = max(resultado, casos[i][j]);
            } else
                casos[i][j] = 0;
        }
    }
    return resultado;
}

int main()
{
    char strg1[52], strg2[52];
    int tamanho1, tamanho2;

    while (fgets(strg1, 52, stdin)) {
        fgets(strg2, 52, stdin);

        tamanho1 = strlen(strg1) - 1;
        tamanho2 = strlen(strg2) - 1;

        printf("%d\n", Substring(strg1, strg2, tamanho1, tamanho2));
    }

    return 0;
}
