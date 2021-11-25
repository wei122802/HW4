#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main() {
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
	system("pause");
	return 0;
}
void staticArrayInit(void) {
	static int array1[3];
	printf("\nValues on entering statstaticArrayInit:\n");
	for (int i = 0; i <= 2; i++) printf("array1[%d] = %d ", i, array1[i]);
	printf("\nValues on exiting statstaticArrayInit:\n");
	for (int i = 0; i <= 2; i++) printf("array1[%d] = %d ", i, array1[i]+=5);
}

void automaticArrayInit(void) {
	int array2[3] = {1,2,3};
	printf("\n\nValues on entering automaticArrayInit:\n");
	for (int i = 0; i <= 2; i++) printf("array2[%d] = %d ", i, array2[i]);
	printf("\nValues on exiting automaticArrayInit:\n");
	for (int i = 0; i <= 2; i++) printf("array2[%d] = %d ", i, array2[i] += 5);
}
