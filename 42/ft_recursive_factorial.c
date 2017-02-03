//statement that perform and generate multiplying action

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	{
		if (nb < 0 || nb > 12)
		//Be aware that this function has an overflow limit at 12
			return (0);
		if (nb == 1)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
}
