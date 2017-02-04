#include <stdio.h>

int	main()
{
	char str[50];
	//The limit of the string is required

	printf("Your name is : ");
	fgets(str, 50,stdin);
	//fgets(string, size, stdin). Avoid using gets() since it's dangerous because the size of the string cannot be specified
	printf("Hello, %s", str);
	return (0);
}
