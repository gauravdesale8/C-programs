/* getting user input - 2 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double gpa;
	printf("Enter your gpa: ");
	scanf("%lf", &gpa); /* %lf(float) is used for scanf only */
	printf("Your gpa is %f.",gpa);
	return 0;
}
