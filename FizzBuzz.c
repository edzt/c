/**
	FizzBuzz
	3がつく数字はFizz
	5がつく数字はBuzz
	どちらでもないときは数字
	を表示させる
**/

#include <stdio.h>

int FizzBuzz(int x);//xのFizz,Buzz判定&表示

int main(){
	int n;//繰り返し:0~n
	printf("0~n:");
	scanf("%d",&n);

	for(int i=0; i<=n; i++){FizzBuzz(i);}
	return 0;
}

int FizzBuzz(int x){
	int FIZZ=0,BUZZ=0;//FIZZ,BUZZフラグ
	int y=x;
	while(y > 0){
		if(y%10 == 3){FIZZ = 1;}
		if(y%10 == 5){BUZZ = 1;}
		y = y/10;//下一桁を切り捨てる
	}
	if(FIZZ){printf("Fizz");}
	if(BUZZ){printf("Buzz");}
	if(!FIZZ&&!BUZZ){printf("%d",x);}//FizzでもBuzzでもない場合
	printf("\n");
	return 0;
}
