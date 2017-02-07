#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int answer;

	answer = 1;
	//Because answer = nb * answer, answer cannot be 0 otherwise the statement will return a value of 0
	if (nb <= 0 || power <= 0)
		return (1);
	if (nb > 1 && power == 1)
		return (nb);
	else
	{
		while (nb != 0 && power != 0)
		{
			answer = nb * answer;
			power--;
		}
		return (answer);
	}
}
