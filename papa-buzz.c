#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int FizzBuzz(int x)
{
	char *cp, buffer[32];
	int f, b;

	f = b = 0;
	sprintf(buffer, "%d", x);
	for (cp=buffer; *cp != '\0'; cp++) {
		switch (*cp) {
		case '3': f = 1; break;
		case '5': b = 2; break;
		}
	}

	return f + b;
}

int main(int argc, char *argv[])
{
	char *FB[] = { "", "Fizz", "Buzz", "Fizz Buzz" };
	int value = (argc == 2) ? atoi(argv[1]): 100;
	int v;

	for(int i=0; i<=value; i++){
		v = FizzBuzz(i);
		printf("(%d) %s\n", i, (v >= 0 && v<= 3) ? FB[v]: "");
	}
	return 0;
}
