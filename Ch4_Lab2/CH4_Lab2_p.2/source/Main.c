#include <stdio.h>
#include <stdlib.h>

int  main() {
	int x = 100;
	addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}

int addbyone(int x) 
{
	x++;
	printf("x=%d\n", x);
}