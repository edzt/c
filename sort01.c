#include <stdio.h>
#define ARRLEN 5

int main(void){
    int num[ARRLEN];
    int *min;

    for(int i=0; i<ARRLEN;i++){
      printf("INPUT %d >> ",i);
      scanf("%d",&num[i]);
    }

    for(int i=0; i<ARRLEN; i++){
      min = &num[i];
      for(int j=i+1; j<ARRLEN; j++){
        if(*min > num[j]) min = &num[j];
      }
      int tmp = *min; //temporary
      *min = num[i];
      num[i] = cp;
    }

    for(int i=0; i<ARRLEN;i++){
      printf(" %d ",num[i]);
      printf(i!=ARRLEN-1 ? "<" : "\n");
    }
    return 0;
}
