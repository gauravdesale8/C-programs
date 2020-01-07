// Reading Files
#include<stdio.h>
#include<stdlib.h>
int main()
{
		char line[260];
		FILE * fpointer = fopen("artist.txt", "r");
		
		fgets(line, 260, fpointer);
		printf("%s", line);
		
		fclose(fpointer);
		return 0;
}
