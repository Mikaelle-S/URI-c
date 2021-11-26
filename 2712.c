#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

  int n,cont,i,j;
  char placa[100],barra,nFinal;
  scanf("%d",&n);
  for(i=0;i<n;i++){
      cont = 0;
      scanf("%s",placa);
      barra = placa[3];
      nFinal = placa[strlen(placa)-1];
      for(j=0;j<3;j++){
          if(islower(placa[j])||!(isalpha(placa[j])))
              cont++;
      }
      if(barra!='-')
          cont++;
      
      for(j=4;j<8;j++){
          if(!(isdigit(placa[j])))
              cont++;
      }

      if(strlen(placa)>8||cont>0) 
          printf("FAILURE\n");
      
        else
      {
          switch(nFinal)
          {
              case '1':
              case '2': printf("MONDAY\n");break;
              case '3':
              case '4': printf("TUESDAY\n");break;
              case '5':
              case '6': printf("WEDNESDAY\n");break;
              case '7':
              case '8': printf("THURSDAY\n");break;
              case '9':
              case '0': printf("FRIDAY\n");break;
          }
      }
  }
  return 0;
}
