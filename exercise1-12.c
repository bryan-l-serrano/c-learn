#include <stdio.h>

int main()
{
	int curChar, lastChar;

	while((curChar = getchar()) != EOF)
	{
		
			
		if(curChar == ' ' || curChar == '\t')
			if(curChar == ' ' && lastChar == ' ')
				continue;
			else if(curChar == '\t' && lastChar == '\t')
				continue;
			else if(curChar == '\t' && lastChar == ' ')
				continue;
			else if(curChar == ' ' && lastChar == '\t')
				continue;
			else
				printf("\n");
		else
			putchar(curChar);


	lastChar = curChar;
	}

	return 0;
}