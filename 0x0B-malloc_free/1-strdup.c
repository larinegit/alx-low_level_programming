#include "main.h"
#include "stdlib.h"

/**
 * _strdup - returns a pointer to a new string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *z;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	z = malloc(sizeof(char) * (i + 1));

	if (z == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		z[r] = str[r];

	return (z);
}
