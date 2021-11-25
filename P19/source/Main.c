#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main() {
	char string1[20],string2[]="string literal";
	printf("Enter a string: ");
	scanf("%s", string1);
	printf("string1 is: %s\nstring2 is: %s\nstring1 with spaces between characters is: \n",string1,string2);
	for (int i =0;string1[i]!='\0';i++) printf("%c ",string1[i]);

	printf("\n");
	system("pause");
	return 0;
}