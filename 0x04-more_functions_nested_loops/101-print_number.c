#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 *
 * Return: always 0
 */

void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
