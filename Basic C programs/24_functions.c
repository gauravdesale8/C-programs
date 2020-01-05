/* Fubctions - 1 */
#include<stdio.h>
#include<stdlib.h>
void sayHi(char name[]);
int main()
{
	sayHi("Mike");
	return 0;
}

void sayHi(char name[])
{
	printf("Hello %s",name);
}
