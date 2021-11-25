#include <stdio.h>

int main () {
     int N,T, i, j, k, p, a;
     char nomes[5000], frequencia[5000], saida[5000], c;

     scanf("%d",&T);
     scanf("%c",&c);        
     
     while (T > 0) {
      scanf("%d",&N);
      scanf("%c",&c);
      gets(nomes);
      gets(frequencia);
      saida[0] = '\0';
      i = j = k = p = a = 0;
      do {
       if (frequencia[i] == 'P')
        p++;
       else if (frequencia[i] == 'A')
        a++;
       else if (frequencia[i] == ' ' || frequencia[i] == '\0') {
        if (p < a*3) {
         while (nomes[j] != ' ' && nomes[j] != '\0') {
          saida[k] = nomes[j];
          k++;
          j++;
         }
         saida[k] = nomes[j];
         k++;
         j++;
         p = 0;
         a = 0;
        }
        else {
         while (nomes[j] != ' ') {
          j++;
         }
         j++;
         p = 0;
         a = 0;
        }
       }
       i++;
      } while (frequencia[i-1] != '\0');
      saida[k-1] = '\0';
      printf("%s\n",saida);
      T--;
     }
     return 0;
}
