#include <stdio.h>
#include <math.h>

#define MAX 100000

int main(void){
  int i,j,r;

  for(i=2; i<MAX; i++){
    r = sqrt(i);
    for(j=2; j<=r; j++){if(i%j==0) break;}
    if(j==r+1)  printf("%d\n",i);
  }
}

