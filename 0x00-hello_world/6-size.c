#include <stdio.h>

/*
 * main - main block
 * return: 0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long m;
	float f;
	
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ln.\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(m));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
