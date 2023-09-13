#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: first integers
 * @b: second integers
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 * @a: first integer
 * @b: second integers
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - writes the remainder of a division
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
