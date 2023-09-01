#include "main.h"

/**
 * print_binary - print a binary representation of a num.
 * @n: numb to convert
 * Return: (void)
 */
void print_binary(unsigned long int n)
{
	int bit, binary = 0, i = 1;

	while (n)
	{
		bit = n & 1;
		n >>= 1;

		binary += bit * i;
		i *= 10;
	}

	printf("%d", binary);
}
