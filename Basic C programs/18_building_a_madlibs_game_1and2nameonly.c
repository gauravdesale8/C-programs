/* Building a madlib game - for only first and second name */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char color[20];
	char pluralNoun[20];
	char celebrityL[20];
	char celebrityF[20];
	printf("Your favorite color: ");
        scanf("%s",color);
	printf("Any random noun of your choice: ");
	scanf("%s",pluralNoun);
	printf("your favorite celebrity: ");
	scanf("%s%s",celebrityL,celebrityF);
	
	printf("Roses are %s.\n",color);
	printf("Blue are %s.\n",pluralNoun);
	printf("I love %s%s.\n",celebrityL,celebrityF);
	return 0;
}	
