#include <stdio.h>
int main(){
  int mf,mi,ht,mt,hi,hf;
  scanf("%d%d%d%d", &mf, &hi, &mi, &hf);
  if(mf==hf && mi==hf && hf==hi)
  {
      ht=hi-hf;
      mt=24+mf-mi;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mt, ht);
  }
  else if(mf==mi && hf>hi)
  {
      ht=hf-hi;
      mt=mf-mi;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mt, ht);
  }
  else if(mf==mi && hi>hf)
  {
      ht=60-hi+hf;
      mt=24-mf+mi-1;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mt, ht);
  }
  else if(hi==hf && mf<mi)
  {
      ht=0;
      mt=mi-mf;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mt, ht);
  }
  else if(hi==hf && mf>mi)
  {
      ht=0;
      mt=24-mf+mi;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mt, ht);
  }
  else if(mi>mf && hf>hi)
  {
      ht=hf-hi;
      mt=mi-mf;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mt, ht);
  }
  else if(mf<mi && hi>hf)
  {
      ht=60-hi+hf;
      mt=mi-mf-1;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mt, ht);
  }
  else if(mf>mi && hi<hf)
  {
      ht=hf-hi;
      mt=24-mf-1+mi;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mt, ht);
  }
  else if(mf>mi && hi>hf)
  {
      ht=60+hf-hi;
      mt=24+mi-mf-1;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", mt, ht);
  }
  return 0;
}
