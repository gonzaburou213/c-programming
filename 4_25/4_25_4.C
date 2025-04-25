#include <stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    if(num % 2 ==0){
    printf("%dは、偶数です。\n",num);
    }else{
    printf("%dは、奇数です。\n",num);
    }
    return 0;
}