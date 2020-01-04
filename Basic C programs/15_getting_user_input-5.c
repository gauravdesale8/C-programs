/* getting user input */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[20];
	printf("Enter your name: ");
	fgets(name, 20, stdin); /* fgets is used to grab whole line. */
	printf("Your name is %s", name);
	return 0;
}
