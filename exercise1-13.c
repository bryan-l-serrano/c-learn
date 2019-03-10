#include <stdio.h>

int main()
{
	//initiates an array of length 15 with all values set to 0
	int wordLength[15];
	for(int i = 0; i < 15; ++i)
	{
		wordLength[i] = 0;
	}

	int numberOfCharacters = 0;
	int curChar;
	int lastChar = ' ';

	while((curChar = getchar()) != EOF)
	{
		//checks to see if there is a 'space' character
		if(curChar == ' ' || curChar == '\t' || curChar == '\n' || curChar == '\0')
		{
			//if there are doubles, ignore them
			if(lastChar == ' ' || lastChar =='\t' || lastChar == '\n')
				continue;
			//if there is a space and not multiple places, adds the length of the word to the array
			else
			{
				lastChar = curChar;
				++wordLength[numberOfCharacters];	
				numberOfCharacters = 0;
			}
		}
		//prevents special characters from counting toward word length
		else if(curChar == '\"' || curChar == '\''|| curChar == '.' || curChar == ','
				|| curChar == '\\' || curChar == ':' || curChar == '?' || curChar == '!')
		{
			lastChar = curChar;
		}
		//if not a space or special character, adds 1 to the word length
		else
		{
			lastChar = curChar;
			++numberOfCharacters;
		}
	}

	//outputs histogram
	for(int i = 1; i <= 15 ; ++i)
	{
		printf("%d: ", i);
		for(int j = 0; j < wordLength[i] ; ++j)
			putchar('#');
		putchar('\n');
	}


	return 0;
}