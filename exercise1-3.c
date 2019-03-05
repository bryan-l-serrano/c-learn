#include <stdio.h>

int main()
{
	//declare variables
	float fahr, celcius;
	int lower, upper, step;

	//define bounds and step
	lower = 0;
	upper = 300;
	step = 20;

	//set initial temperature to be 0 fahrenheit
	fahr = lower;

	//heading
	printf("Temperature\n");
	printf("Fahrenheit\tCelcius\n");

	//prints degrees fahrenheight and degrees celcius
	while (fahr <= upper)
	{
		celcius = (5.0/9.0) * (fahr -32);
		printf("%10.0f\t%7.1f\n",fahr,celcius);
		fahr = fahr + step;
	}
}