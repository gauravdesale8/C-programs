// Writing Files
#include<stdio.h>
#include<stdlib.h>
int main()
{
		FILE * fpointer = fopen("artist.txt", "w");
		
		fprintf(fpointer, "Zayn\nJustin\nSelena\nArianna");
		
		fclose(fpointer);
		return 0;
}
