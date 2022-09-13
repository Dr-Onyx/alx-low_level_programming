#include "main.h"

/**
 * main - prints the alphabet in lower case
 *
 * Retun: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}

