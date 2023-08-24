#include "main.h"

/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, num1 = 0, num2 = 0, sum = 0, carry = 0;
	while (i <= l1 || i <= l2)
	{
		num1 = num2 = 0;
		if (i <= l1)
			num1 = n1[l1 - i] - '0';
		if (i <= l2 && (l2 - i) >= 0)
			num2 = n2[l2 - i] - '0';
		sum = num1 + num2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[i] = sum + '0';
		i++;
	}
	return carry;
}
