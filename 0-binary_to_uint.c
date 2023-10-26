#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that convert a binary number to an unsigned int
 * @m: string to convert.
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *m)
{
	unsigned int num, i;

	if (!m || !*m)
		return (0);

	num = i = 0;
	while (m[i])
	{
		if (m[i] > 49)
			return (0);
		else if (m[i] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		i++;
	}
	return (num);
}
