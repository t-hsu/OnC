//This program is created to display the conversion of temperature from the unit of Celsius to Fahrenheit
#include <stdio.h>

int	main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Celsius vs Fahrenheit:\n");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%6.0f %6.1f\n", celsius, fahr);
		//%3.0f stands for printing results as floating point, at least 3 characters wide, with no decimal places
		fahr = fahr + step;
	}
	return (0);
}
