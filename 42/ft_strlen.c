//This functioni counts and returns the number of the characters in a string

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
