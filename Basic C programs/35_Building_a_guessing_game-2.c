/* Building guessing game - 2 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int secretNumber = 5;
	int guess;
	int guessCount = 0;
	int guesslimit = 3;
	int outOfGuesses = 0;

	while(guess != secretNumber && outOfGuesses == 0)
	{
		if(guessCount < guesslimit)
		{
			printf("Enter a number: ");
			scanf("%d", &guess);
			guessCount++;
		}
		else
		{
			outOfGuesses = 1;
		}
	}
	if(outOfGuesses == 1)
	{
		printf("Out of guesses");
	}
	else
	{
		printf("You Win!");
	}
	return 0;
}
