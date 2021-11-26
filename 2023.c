#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int comparar(char const *i, char const *j)
{
    for (;; i++, j++) {
        int k = tolower(*i) - tolower(*j);
        if (k != 0 || !*i)
            return k;
    }
}

int compare(const void *i, const void *j)
{
    const char *string1 = (const char *) i;
    const char *string2 = (const char *) j;

    return comparar(string2, string1);
}

int main()
{
    char crianca[1000][101];
    int n_crianca = 0;

    while (fgets(crianca[n_crianca], 101, stdin))
        ++n_crianca;

    qsort(crianca, n_crianca, 101, compare);

    printf("%s", crianca[0]);

    return 0;
}
