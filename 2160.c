#include <stdio.h>
#include <string.h>

int main()
{
    char linha[600];
    gets(linha);
    printf((strlen(linha)>80)?"NO\n":"YES\n");
    
    return 0;
}
