#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main() {
	int face,  frequency[SIZE] = {0};

	srand(time(NULL));	
	for (int roll = 1; roll <= 6000; roll++) {
		face = 1 + rand() % 6;
		++frequency[face];//先把frequency[face]的值加1，再執行整個敘述
	}
	printf("%s%17s\n", "Face", "Frequency");

	for (face = 1; face < SIZE; face++)
		printf("%4d%17d\n", face, frequency[face]);




	system("pause");
	return 0;
}