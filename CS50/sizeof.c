//An indication of how many byte of space is neede to store each unit

#include <stdio.h>
//standard input/output library
#include <stdbool.h>
//enable boolean function

int main(void)
{
	printf("bool is %lu\n", sizeof(bool));
	printf("char is %lu\n", sizeof(char));
	printf("double is %lu\n", sizeof(double));
	printf("float is %lu\n", sizeof(float));
	printf("int is %lu\n", sizeof(int));
	printf("long long is %lu\n", sizeof(long long));
}
