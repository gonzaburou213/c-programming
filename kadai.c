//長方形の面積を求める関数を作りなさい
//2つの値を受け取りその値を掛け算した値を返す関数
#include <stdio.h> 

//関数のプロトタイプ宣言
float chohokei (float tate,float yoko);

//main関数
int main (void){
    float menseki =chohokei(5.0,4.0);
        printf("%f\n",menseki);
    
    return 0;
}

//kadai関数

float chohokei(float tate ,float yoko){
    float menseki;
   menseki= tate * yoko;
    return menseki;
}
