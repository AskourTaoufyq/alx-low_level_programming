#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_val = n ^ m;
	unsigned int count = 0;

	while (XOR_val)
	{
		if (XOR_val & 1ul)
			count++;
		XOR_val = XOR_val >> 1;
	}
	return (count);
}
