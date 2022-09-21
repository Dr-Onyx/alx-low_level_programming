#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: an integer (0 if equal, +ve if s1 > s2, _ve if s1 < s2)
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0, count2 = 0;

	while (count == 0)
	{
		if (*(s1 + count2) == '\0' && *(s2 + count2) == '\0')
			break;
		count = *(s1 + count2) - *(s2 + count);
		count2++;
	}

	return (count);
}
