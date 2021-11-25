#include <stdio.h>

#define MAXPEDIDOS 21
#define MAXPIZZA 31
#define max(a, b) a > b ? a : b
 
struct entrega{
    int tempo;
    int pizza;
};
 
struct entrega array[MAXPEDIDOS];
int v[MAXPEDIDOS][MAXPIZZA];
 
int main()
{
    int N, P, i, j;
 
    while(scanf("%d", &N) && N){
        scanf("%d", &P);
        for(i = 1; i <= N; i++)
            scanf("%d %d", &array[i].tempo, &array[i].pizza);
 
        for(i = 0; i <= N; i++){
            for(j = 0; j <= P; j++){
                if(i == 0 || j == 0)
                    v[i][j] = 0;
                else{
                    if(array[i].pizza > j)
                        v[i][j] = v[i - 1][j];
                    else
                        v[i][j] = max(v[i - 1][j - array[i].pizza] + array[i].tempo, v[i - 1][j]);
                }
            }
        }
 
        printf("%d min.\n", v[N][P]);
    }
 
    return 0;
}
