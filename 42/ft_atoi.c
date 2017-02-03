//The function convert string into integer

#include <unistd.h>

int	ft_atoi(char *str)
{
	int a;

	result = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 48 || str[a] > 57)
		//set up range for limit
			return (0);
		else
		{
			result = result * 10 + (str[a] -48);
			//convert character into integer and move the digits one level up
			a++;
		}
	}
	return (result);
}
			
