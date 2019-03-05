//this program removes instances of there being multiple spaces in a row
//from stdin and copies the input to only have one space instead

#include <stdio.h>

int main()
{
	//define variables
	int lastChar = ' ';
	int curChar;


	//determines weather to print the character
	//or if there are multiple spaces
	//not to print the character from stdin
	while((curChar = getchar()) != EOF)
	{	
		if(curChar == ' ' && lastChar == ' ')
		{
			continue;
		}
		else
		{
		putchar(curChar);
		}
		lastChar = curChar;
	}
	return 0;
}