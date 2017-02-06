//Iterative, this program will only work for integers in the range of single digit

#include <stdio.h>

int	sigma0(int m);

int	main(void)
{
	int n;

	do
	{
		printf("positive integer please: ");
		n = getchar();
	}
	while (n < 1);
	int answer = sigma0(n - 48);
	//Be aware that the n acquired from user are in the form of char so a conversion into integer is required
	printf("%d\n", answer);
}

int	sigma0(int m)
{
	int sum;

	sum = 0;
	for (int i = 1; i <= m; i++)
	{
		sum += i;
	}
	return (sum);
}
