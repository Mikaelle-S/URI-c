#include <stdio.h>
 
int main() {
  double A,B,C,nota,media;
  scanf("%lf %lf %lf",&A,&B,&C);

  nota = (A*2)+(B*3)+(C*5);
  media = nota/(2+3+5);

  printf("MEDIA = %.1f\n",media);

  return 0;
}
