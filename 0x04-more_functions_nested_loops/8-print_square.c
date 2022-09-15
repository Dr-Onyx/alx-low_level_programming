#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j;

	while (i < n && i > 0)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');

			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
