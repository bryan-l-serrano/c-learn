

#include <stdio.h>

int main()
{
	int curChar;

	//determines if each character is a tab, backspace, or \.
	//prints results accordingly
	while((curChar = getchar()) != EOF)
	{
		if(curChar == '\t')
			printf("\\t");
		else if(curChar == '\b' )
			printf("\\b");
		else if(curChar == '\\')
			printf("\\\\");
		else
			putchar(curChar);
	}

	return 0;
}