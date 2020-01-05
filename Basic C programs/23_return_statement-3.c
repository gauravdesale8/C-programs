/* Return statement - 3 */
#include<stdio.h>
#include<stdlib.h>
double cube (double num); /* prototype */
int main()
{
	printf("Answer: %f",cube(6.0));
	return 0;
}

double cube (double num)
{
	return num * num * num;
}
