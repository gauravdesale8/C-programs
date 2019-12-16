/* Printf Basics */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("Hello\nWorld"); /* \n for next line */
	{
		printf("\nHello\"World"); /* \ for printing " */
		printf("\n");
    }
		{
			printf("My favorite %s is %d\n","number" , 500); /* %s for adding character and %d for adding integer */
			printf("My favorite %s is %f\n","number" , 500.456); /* %f for adding decimal integer */
			
			char myChar = 'i';
			printf("My favorite number is %c\n",myChar); /* %c for adding single character */
		}	
		
		
    
	return 0;
}
