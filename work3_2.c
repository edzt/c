/*
ソートする②
*/
#include <stdio.h>
#define ARRLEN 5

int main(void){
  int num[ARRLEN];
  int *cp;

  for(int i=0; i<ARRLEN;i++){
    printf("INPUT %d >> ",i);
    scanf("%d",&num[i]);
  }
  for(int i=1; i<ARRLEN; i++){
    cp = &num[i];
    while(cp!=num){//先頭につくor左の方が小さい -> break
      if(*cp < *(cp-1)){
        int tmp = *cp;
        *cp = *(cp-1);
        *(--cp) = tmp;//cp--;を合わせた。cp--と--cpは違う！
      }else{break;}
    }
  }
  for(int i=0; i<ARRLEN;i++){
    printf(" %d ",num[i]);
    printf(i!=ARRLEN-1 ? "<" : "\n");
  }
  return 0;
}
