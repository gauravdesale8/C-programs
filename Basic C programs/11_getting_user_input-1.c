/*getting user input - 1 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age); /* scanf is used to store value */
	printf("You are %d years old.", age);
	return 0;
}
