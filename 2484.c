#include <stdio.h>
#include <string.h>

int main() {
  char palavra[101];
  int i,j,k,cont;
 
  while(scanf("%s",palavra)!=EOF){
    cont=strlen(palavra);
    for(j=0;j<=strlen(palavra)-1;j++){
      for(i=0;i<j;i++){
        printf(" ");
      }
      for(k=0;k<cont;k++){
        printf("%c",palavra[k]);
        if(k<cont-1)
          printf(" ");
      }
      cont--;
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
