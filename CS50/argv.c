//This programs print out all arguments given in the form of characters

#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int i;
	int j;

	for (i = 0; i < argc; i++)
	//iterate over strings in argv
	{
		for (int j = 0, n = strlen(argv[i]); j < n; j++)
		//iterate over characters in current string
		{
			printf("%c\n", argv[i][j]);
		//print j'th character in i'th string
		}
	}
}
