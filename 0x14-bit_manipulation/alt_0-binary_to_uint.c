#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that convert a binary number to an unsigned int
 * @b: string to convert.
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i, expo = 1;

	if (!b || !*b)
		return (0);

	i = 0;
	while (b[i])
	{
		if (b[i] - 48 > 1)
			return (0);
		i++;
	}
	i--;
	num = 0;
	do {
		num += (b[i] - '0') * expo;
		expo *= 2;
	} while (i--);

	return (num);
}


