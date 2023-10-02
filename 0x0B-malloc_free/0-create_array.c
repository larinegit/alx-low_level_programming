#include "main.h"
#include <stdlib.h>

/**
 * main -  creates an array of chars, and initializes it with a specific char.
 * @size : the Size of the array to make.
 * @c: characture to fill the array with.
 * Description: create array of size size and assign char c
 * Return: An array of charactures.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size <= 0)
		return (0);
	ar = malloc(size);
	if (ar == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
