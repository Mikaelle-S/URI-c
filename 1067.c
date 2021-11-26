#include <stdio.h>

int main(){
  int n,cont;
  scanf("%d",&n);
  1<=n<=1000;

  if (n%2 == 0){
      n=n-1;
  }
  for (cont=1;cont<=n;cont+=2){
      printf("%d\n",cont);
  }    
  return 0;
}
