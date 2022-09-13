#include "main.h"

/**
 * main - prints the alphabet in lower case
 *
 * Retun: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	
	_putchar('\n');

	return (0);
}

