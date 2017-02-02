//This function is written to display all single digits of integer in ascending order
#include <unistd.h>

void	ft_print_numbers(void)
//by setting up with no parameter, declaration of int i inside the function is required
{
	int i;

	i = '0';
	while (i <= '9')
	{
		write (1, &i, 1);
		i++;
	}
}
