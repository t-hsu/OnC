//This function is written to display all alphabet in ascending order
#include <unistd.h>

void	ft_print_alphabet(char c)
//by setting up with a parameter char c, no declaration is required inside the function
{
    c = 'a';
    while (c <= 'z')
    {
        write (1, &c, 1);
        c++;
    }
}
