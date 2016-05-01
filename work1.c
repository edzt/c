/*
最大値と最小値を表示させる
*/

#include <stdio.h>
#define ARRLEN 5

int main(void){
    int num[ARRLEN];
    int min,max;

    for(int i=0; i<ARRLEN;i++){
      printf("INPUT %d >> ",i);
      scanf("%d",&num[i]);
    }

    min = max = num[0];
    for(int i=0; i<ARRLEN; i++){
      if(min > num[i])  min=num[i];
      if(max < num[i])  max=num[i];
    }

    printf("最小値は%d,最大値は%dです。\n",min,max);
    return 0;
}
