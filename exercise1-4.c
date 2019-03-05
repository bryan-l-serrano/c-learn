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

	//set initial temperature to be 0 celcius
	celcius = lower;

	//heading
	printf("Temperature\n");
	printf("Celcius\tFahrenheit\n");

	//prints degrees celcius and degrees fahrenheit
	while (celcius <= upper)
	{
		fahr = (9.0/5.0) * celcius + 32;
		printf("%7.0f\t%10.1f\n",celcius, fahr);
		celcius = celcius + step;
	}
}