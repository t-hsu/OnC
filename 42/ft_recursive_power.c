#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb <= 0 || power <= 0)
		return (1);
	if (nb > 1 && power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
