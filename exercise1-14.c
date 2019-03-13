#include <stdio.h>

int main()
{
	//initiates an array of length 255 with all values set to 0
	int characters[255];
	for(int i = 0; i < 255; ++i)
	{
		characters[i] = 0;
	}

	int curChar;

	//increments the corresponding ascii value of a character in the array
	while((curChar = getchar()) != EOF)
	{
		++characters[curChar];
	}
	//outputs a histogram of the array contents without printing any line from 
	//the array where the value is 0
	for(int i = 1; i <= 255 ; ++i)
	{
		if(characters[i] > 0)
		{
			printf("%c: ", i);
			for(int j = 0; j < characters[i] ; ++j)
				putchar('#');
			putchar('\n');
		}
	}

	return 0;
}