#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int minimun(const int grade[][EXAMS], int pupils, int tests);
int maximun(const int grade[][EXAMS], int pupils, int tests);
double avarage(const int setOfGrades[], int tests);
void printArray(const int grade[][EXAMS], int pupils, int tests);

int main() {
	const int studentGrades[STUDENTS][EXAMS] = {
	{77,68,86,73},
	{96,87,89,78},
	{70,90,86,81}};
	printf("The array is:\n");
	printArray(studentGrades, STUDENTS, EXAMS);
	printf("\n\nLowest grade: %d\nHighest grade: %d\n",
		minimun(studentGrades, STUDENTS, EXAMS), maximun(studentGrades, STUDENTS, EXAMS));
		
	for (int student = 0; student < STUDENTS; student++) 
		printf("The average grade for student %d is %.2f\n", student, avarage(studentGrades[student], EXAMS));
	
	system("pause");
	return 0;
}
void printArray(const int grade[][EXAMS], int pupils, int tests) {
	printf("%16c ", ' ');
	printf("[0]  [1]  [2]  [3]");
	for (int i = 0; i < pupils; i++) {
		printf("\nstudentGrades[%d] ", i);
		for (int j = 0; j < tests; j++)
			printf("%-5d", grade[i][j]);
	}
}

int minimun(const int grade[][EXAMS], int pupils, int tests) {
	int min = 100;
	for (int i = 0; i < pupils; i++) {
		for (int j = 0; j < tests; j++)
			if (grade[i][j] < min) min = grade[i][j];
	}
	return min;
}

int maximun(const int grade[][EXAMS], int pupils, int tests) {
	int max = 0;
	for (int i = 0; i < pupils; i++) {
		for (int j = 0; j < tests; j++)
			if (grade[i][j] > max) max = grade[i][j];
	}
	return max;
}
double avarage(const int setOfGrades[], int tests) {
	double total = 0;
	for (int i = 0; i < tests; i++) {
		total += setOfGrades[i];
	}
	return total/tests;
}