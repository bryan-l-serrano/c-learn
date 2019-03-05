//this program prints the numner of lines, tabs, and blanks it comes
//accross from stdin. for linux ctrl+d is EOF and for windows it is ctrl+z

#include <stdio.h>

int main()
{
	//define variables
	int line = 0;
	int tab = 0;
	int blank = 0;
	int c;

	//checks characters in stdin to see if there is a newline, tab or blank
	//if there is it increments the respective variable by one
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++line;
		}
		else if (c == '\t')
		{
			++tab;
		}
		else if (c == ' ')
		{
			++blank;
		}
	}

	//prints number of lines, tabs, and blanks
	printf("Number of lines: %d)\n",line);
	printf("Number of tabs: %d\n", tab);
	printf("number of blanks: %d\n", blank);



	return 0;
}