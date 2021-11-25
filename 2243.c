#include <stdio.h>
#include <stdlib.h>

#define TMAX 50000

#define DIREITA 1
#define ESQUERDA -1

int TRIANGULO(const int *colunas, int x, int y);
int ALTURA(const int *colunas, int x, int y, int direcao);

int main (void) {
    int i, j, N, colunas[TMAX], mColuna, gColuna;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", colunas + i);
    }
    mColuna = 1;
    gColuna = 1;

    for (i = 2; i <= N; i++) {
        for (j = i - 1; j <= N - i; j++) {
            if (TRIANGULO(colunas, j, i)) {
                gColuna = i;
                break;
            }
        }

       
        if (mColuna == gColuna) {
            break;
        }

        mColuna = gColuna;
    }

    printf("%d\n", mColuna);

    return 0;
}

int TRIANGULO(const int *colunas, int x, int y) {
    if (colunas[x] >= y) {
        return ALTURA(colunas, x - 1, y - 1, ESQUERDA) && ALTURA(colunas, x + 1, y - 1, DIREITA);
    }
    else {
        return 0;
    }
}

int ALTURA(const int *colunas, int x, int y, int direcao) {
    if (y == 1) {
        return 1;
    }
    else if (colunas[x] >= y){
        return ALTURA(colunas, x + direcao, y - 1, direcao);
    }
    else {
        return 0;
    }
}
