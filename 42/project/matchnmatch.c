//Recursion method : if two file name matches (s1 & s2), return 1, otherwise return 0. When encounter *, it can be replaced by any name and it can be placed as many times as you like. This program has not yet been tested.
#include <unistd.h>

int	match(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 != *s2 && *s2 != '*')
		return (0);
	else if (*s1 == *s2 && *s1 != '*')
		return (match(s1 + 1, s2 +1));
	else if (*s2 == '*')
	{
		if (*s1 != 0)
			return (match(s1 + 1, s2) || match(s1, s2+1));
		return (match(s1, s2 + 1));
	}
	else
		return (0);
}
