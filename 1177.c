#include <stdio.h>

int main(){
  int N[1000],i,j,k;
  scanf("%d",&j);
  for(i=0,k=0;i<1000;i++){
    printf("N[%d] = %d\n", i,k);
    k++;
    if(k==j){
      k=0;
    }
  }
  
  return 0;
}
