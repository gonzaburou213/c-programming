//C言語の関数について
//特定の処理をまとめたプログラム

#include <stdio.h>
 int add(int a, int b);//関数のプロトタイプ宣言
 int add5(int a);

int main(void){
    printf("%d\n",add(5,5));
}


//メイン関数は、プログラムで最初に実施される関数
//私たちが作っていた関数は、すべてメイン関数で実施される

int add(int a, int b){
    return a + b;
}

//関数はリターンを書く

int add5(int a){
    a = a + 5;
    return a;
}
