#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
  int count = (argc == 2) ? atoi(argv[1]) : 30 ;
  int i,j;
  for(i=2; i<count; i++){
    for(j=2; j<i; j++){if(i%j==0) break;}
    if(i==j)  printf("%d\n",j);
  }
}
