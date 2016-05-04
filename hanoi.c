#include <stdio.h>
#define MAX 5

void printT(void);
void moveT(int d, int g);

int donut[MAX],count=1;

int main(void){
  for(int i=0; i<MAX; i++){donut[i] = 0;}//初期化
  moveT(MAX-1,2);
  return 0;
}

void printT(void){
  printf("----%d----\n",count);
  for(int i=0; i<MAX; i++){
    if(donut[i] == 0) printf("%d\n",i+1);
    if(donut[i] == 1) printf("    %d\n",i+1);
    if(donut[i] == 2) printf("        %d\n",i+1);
  }
  printf("--  --  --\n\n");
  count++;
}

void moveT(int d, int g){
  if(d > 0) moveT(d-1,3-(g+donut[d]));
  donut[d] = g;
  printT();
  if(d > 0) moveT(d-1,g);
}
