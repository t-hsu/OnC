//Always evaluate the right side of the equal sign before the left side of the equal sign

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	//passing value a to temp
	*a = *b;
	//passing value b to a
	*b = temp;
	//returning value temp(originally a) back to b
}
