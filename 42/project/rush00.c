//This program is created to print geometric shape specifically squares and rectangles with characters A B C
#include <unistd.h>

int	putchar(char c);
void	start(int x);
void	middle(int x);
void	end(int x);

int	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	start(x);
	putchar ('\n');
	while ((y - 2) > 0)
	{
		middle(x);
		putchar('\n');
		y--;
	}
	if (y > 1)
		end(x);
	putchar('\n');
	return (0);
}

void	start(int x)
{
	putchar('A');
	while ((x - 2) > 0)
	{
		putchar('B');
		x--;
	}
	if (x > 1)
		putchar('C');
}

void	middle(int x)
{
	putchar('B');
	while ((x - 2) > 0)
	{
		putchar(' ');
		x--;
	}
	if (x > 1)
		putchar('B');
}

void	end(int x)
{
	putchar('C');
	while ((x - 2) > 0)
	{
		putchar('B');
		x--;
	}
	if (x > 1)
		putchar('A');
}

int	putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
