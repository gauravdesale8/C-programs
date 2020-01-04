/* Building a madlib game - for only first name */
#include<stdio.h>
#include<stdlib.h>
int main()

	char color[20];
	char pluralNoun[20];
	char celebrity[20];
	printf("Your favorite color: ");
        scanf("%s",color);
	printf("Any random noun of your choice: ");
	scanf("%s",pluralNoun);
	printf("your favorite celebrity: ");
	scanf("%s",celebrity);
	
	printf("Roses are %s.\n",color);
	printf("Blue are %s.\n",pluralNoun);
	printf("I love %s.\n",celebrity);
	return 0;
}	
