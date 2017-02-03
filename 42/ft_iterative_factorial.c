//loop that creates repeated multiplying action

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb <= 0 || nb > 12)
	//Be aware that this function has an overflow limit at 12
		return (0);
	if (nb == 1)
		return (1);
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
