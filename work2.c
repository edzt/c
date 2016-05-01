/*
素数を表示させる
*/
#include <stdio.h>
#define MAX 30

int main(void){
  int i,j;//forの中に書くとforを出た時に消滅してしまう！
  for(i=2; i<MAX; i++){
    for(j=2; j<i; j++){if(!i%j) break;}
    if(i==j)  printf("%d\n",j);
  }
}
