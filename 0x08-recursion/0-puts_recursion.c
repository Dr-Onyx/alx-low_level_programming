#include "main.h"

/**
 * _puts_recursion - prints a string to stdout recursively
 * @s: string to be printed
 *
 * Return: Null
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}