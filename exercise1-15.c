#include <stdio.h>

//prototype function toCel
float toCel(int n);

int main()
{
	float celTemp;

	//setup table
	printf("%s\t%s\n", "fahrenheit", "celcius");
	
	//calls toCel function on every int from 0 to 300, with step size 10 
	for(int i = 0; i <= 300; i+=10)
	{
		celTemp = toCel(i);
		printf("%10d\t%7.2f\n", i, celTemp);
	}
	return 0;
}

//inputs fahrenheit temperature, returns the temperature in celcius
float toCel(int temp)
{
	return (5.0 / 9.0) * (temp - 32);
}