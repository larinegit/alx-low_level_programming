#include <stdio.h>
/**
 * main - print number 0 to 9
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
