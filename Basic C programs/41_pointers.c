// pointers
#include<stdio.h>
int main()
{
	int age = 30;
	int *pAge = &age;
	double gpa = 3.4;
	double *pGpa = &gpa;
	char grade = 'A';
	char *pGrade = &grade;
	
	printf("age's memory address: %p\n");
	return 0;
}
