/* Building a better calculator */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double num1;
	char op;
	double num2;
	
	printf("Enter the first number: ");
	scanf("%lf",&num1);
	printf("Enter the operator: ");
	scanf("  %c",&op);
	printf("Enter the second number: ");
	scanf("%lf",&num2);
	
	if(op == '+')
	{
		printf("%f", num1 + num2);
	}
	else if(op == '-')
	{
		printf("%f", num1 - num2);
	}
	else if(op == '*')
	{
		printf("%f", num1 * num2);
	}
	else if(op == '/')
	{
		printf("%f", num1 / num2);
	}
	else
	{
		printf("Invalid Operator");
	}
	return 0;
}	
