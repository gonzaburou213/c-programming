#include <stdio.h>
int main (void){
    int scores[5]={0,1,2,3,4};
    for( int i=0; i<5; i++){
        printf("得点は、%d点です\n",scores[i]);
    }

    return 0;
}