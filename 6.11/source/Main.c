#include <stdio.h>
#include <stdlib.h>

void change(int a, int b);

int main() {
	int num[10],count=0;
	printf("Enter ten Integer:");
	for (int i=0;i<10;i++)  scanf_s("%d",&num[i]);

	for (int x = 1; x < 10; x++) {
		for (int y = 1; y < 10; y++) {
			if (num[x+y-2] < num[y]) count++;
		}
	}

	if (count == 10) {
		for (int i = 0; i < 10; i++) printf("%3d", num[i]);
	}

	else {
		for (int k = 0; k < 10; k++) {
			for (int i = 1; i < 10 - k; i++) {
				if (num[i - 1] > num[i])  change(&num[i - 1], &num[i]);
			}
		}

		for (int i = 0; i < 10; i++) printf("%3d", num[i]);
		printf("\n");
	}
	system("pause");
}

void change(int *a, int *b) { 
	int temp;
	temp = *a; 
	*a = *b; 
	*b = temp; 
}
