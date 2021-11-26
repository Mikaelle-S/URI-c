#include <stdio.h>
 
int main() {
 
    float num,media,pos=0;
    float val=0;
    int i;
    
    for(i = 0; i < 6; ++i)
    {
        scanf("%f", &num);
        if(num > 0){
            val += num;
            pos++;
        }
    }
    media = val/pos;
    printf("%.0f valores positivos\n",pos);
    printf("%.1f\n", media);
    return 0;
}
