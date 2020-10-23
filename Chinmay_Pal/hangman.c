#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char guessWord[20] , tempword[20], guess;
	int trial = 7,i,b,j,a;

	printf("Word to guess: ");
	scanf("%s", guessWord);
	printf("you've got 7 trials\n");

	int l = strlen(guessWord);

	for ( i = 0; i < l; ++i)
	{
		tempword[i] = '_';
	}

	for ( i = 0; i < l; ++i)
	{
		if (guessWord[i] == 'a')
		{
			tempword[i] = 'a';
		}else if (guessWord[i] == 'e')
		{
			tempword[i] = 'e';
		}else if (guessWord[i] == 'i')
		{
			tempword[i] = 'i';
		}else if (guessWord[i] == 'o')
		{
			tempword[i] = 'o';
		}else if (guessWord[i] == 'u')
		{
			tempword[i] = 'u';
		}
	}

	for ( i = 0; i < l; ++i)
	{
		printf("%c ",tempword[i] );	
	}

 	while (trial > 0) {

		printf("\nEnter your guess: ");
		scanf(" %c", &guess);

		int flag = -1;

		for (i = 0; i < l; ++i)
		{
			if (guessWord[i] == guess)
			{
				tempword[i] = guess;
				flag = 0;
			}
		}

		if (flag == -1)
		{
			trial -= 1;
			printf("Incorrect guess\ntrials left : %d\n",trial );
			if (trial == 0)
			{
				printf("\nSorry you lose\nThe word was: ");
				for ( b = 0; b < l; b++){
					printf("%c", guessWord[b]);
				}
				printf("\n");
				break;
			}
		} else {
			
			printf("correct guess\n");
			for ( j = 0; j < l; ++j)
			{
				printf("%c ",tempword[j] );
			}
			printf("\n");
			
			int ctr = 0;
			for ( a = 0; a < l; ++a)
			{
				if (guessWord[a] == tempword[a])
				{
					ctr++;
				}
			}
			if (ctr == l)
			{
				printf("YOUT WIN\n");
				break;
			}


		}


	}	

	

	return 0;
}