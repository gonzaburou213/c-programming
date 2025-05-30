#include <stdio.h>
int main (void){
    int i,n,s;
    s=0;
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        s=s+i;

        printf("合計は%d\n",s);
    }
}