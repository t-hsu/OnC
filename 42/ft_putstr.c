//This function displays a string of characters on the standard output

#include <unistd.h>

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	//when not reaching the end of the string, continue to loop
	{
		ft_putchar(str[index]);
	}
}
