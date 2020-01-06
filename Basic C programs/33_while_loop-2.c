/* While loop - 2 */
#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int index = 6;
	do { /* do excutes even when statement is false */
		printf("%d\n", index);
		index++;
	}
	while(index <= 5);

	return 0;
}
