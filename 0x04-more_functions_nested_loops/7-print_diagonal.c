#include "main.h"

/**
 * print_diagonal - draws a diagonal line of backslashes
 * @n: number of times the character should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		j = ii;
		while (j < 1)
		{
			_putchar(' ');

			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
