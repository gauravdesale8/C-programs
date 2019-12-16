/* Learning basic variables */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char characterName[] = "Tom";
	int characterAge = 40;
	printf("There was once was a man named %s,\n", characterName);
	printf("he was %d years old.\n", characterAge);
	
	characterAge = 50;
	printf("He really liked the name %s,\n", characterName);
	printf("but did not like being %d.\n", characterAge);
	return 0;
}
