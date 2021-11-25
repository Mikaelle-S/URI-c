#include <stdio.h>
#include <math.h>

int vet[51];
int cont, N;

void torres(int x, int y);
 
int main() {
    
    int i, j,T;
    scanf("%d", &T);
    for (i = 0; i < T; i++){
        scanf("%d", &N);
        for(j = 0; j < 50; j++)
            vet[j]= 0;
        cont = 0;
        torres(1, 0);
        printf("%d\n", cont);
    }
    return 0;
}

void torres(int x, int y){
    
    int i;
    if(y == N) return;
  
    if(vet[y] == 0){
        vet[y] = x;
        cont++;
        return torres(x+1, y);
    }
    for(i = 0; i <= y; i++){
        int raiz = (int) sqrt(vet[i] + x);
        if(pow(raiz,2) == vet[i] + x){    
            vet[i] = x;
            cont++;
            return torres(x+1, y);
        }
    }
    torres(x, y + 1);
}
