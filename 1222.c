#include <stdio.h>
#include <string.h>

int main()
{
  int N, L, C;
  char conto[100002];
  int len, carac, linhas, paginas;
  int i, j, k;

  while (scanf("%d%d%d", &N, &L, &C) != EOF) {
    getchar();

    fgets(conto, 100002, stdin);
    len = strlen(conto) - 1;

    carac = k = 0;
    linhas = paginas = 1;

    for (i = 0; i < len; ++i) {
      if (i && conto[i-1] == ' ')
        k = i;
      if (carac == C) {
        ++linhas;
        if (conto[i] == ' '){
          carac = 0;
        }            
        else{
          carac = i - k + 1;
        }
      } 
      else
        ++carac;
    }
    paginas = linhas / L + (linhas % L > 0);
    printf("%d\n", paginas);
  }
  return 0;
}
