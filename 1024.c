#include <stdio.h>
#include <string.h>
int main()
{
  char msg[1000],msg1[1000];
  int i,j,k,l,m,n,casos;
  scanf("%d",&casos);
  getchar();
  while(casos--)
  {
    gets(msg);
    k = strlen(msg);
    for(i=0;i<k;i++)
    {
      if((msg[i]>='A' && msg[i]<='Z') || (msg[i]>='a'&& msg[i]<='z'))
        msg[i] = msg[i] + 3;
    }
    n=0;
    for(j=k-1;j>=0;j--)
    {
      msg1[n] = msg[j];
      n++;
    }
    msg1[n] = '\0';
    l = k/2;
    for(i=l;i<k;i++)
    {
      msg1[i] =  msg1[i] - 1;
    }
    printf("%s\n",msg1);
  }
  return 0;
}
