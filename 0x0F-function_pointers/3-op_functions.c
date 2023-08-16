#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return's the sum of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Return's the difference of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return's the product of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return's the division of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Return's the remainder of the division of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
