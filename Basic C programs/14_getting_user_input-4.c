/* getting user input - 4 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[20];
	printf("Enter your name: ");
	scanf("%s", name); /* %s is used for string function */
	printf("Your name is %s.", name);
	return 0;
}
