#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string to be searched for
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, supposed_count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		supposed_count++;
		if (count == 0 || count != supposed_count)
			break;
	}
	return (count);
}
