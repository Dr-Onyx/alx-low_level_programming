#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int alpha1;
	int alpha2;

	for (alpha1 = 0; alpha1 <= 9; alpha1++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}
