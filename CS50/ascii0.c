//This program prints all capital alphabets and their associated integer number on the ascii table
//The distance between Capital letters and small letters is 32, conversion between them can be done by using 'a' -32 or 'A' +32. library <ctype.h> does provide functions toupper and tolower to do the same work

#include <stdio.h>

int	main(void)
{
	int i;

	for (i = 65; i < 65 + 26; i++)
	//For is often use when the number of iterative required is known, and while is used when the number of iterative required is unknown.
	{
		printf("%c is %i\n", (char) i, i);
		//by casting (char), the program will know to treat the integer i as an character
	}
}
