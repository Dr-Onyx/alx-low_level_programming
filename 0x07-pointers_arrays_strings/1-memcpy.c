#include "main.h"

/**
 * _memcpy - Fills the buffer with a constant
 * @dest: buffer to be filled
 * @src: char
 * @n: number of bytes
 *
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[1];
	}

	return (dest);
}
