#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 *
 * @argc:shows the number of commands
 * @argv: array with the command line argument
 *
 * Return: (0) on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
