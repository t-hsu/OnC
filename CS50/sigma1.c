//Recursive, this program will only work for integrs in the range of single digit

#include <stdio.h>

int	sigma1(int m);

int	main(void)
{
	int n;

	do
	{
		printf("positive integer please: ");
		n = getchar();
	}
	while (n < 1);
	int answer = sigma1(n - 48);
	printf("%d\n", answer);
}

int	sigma1(int m)
{
	if (m <= 0)
	{
		return (0);
	}
	else
	{
		return (m + sigma1(m -1));
	}
}
