#include "main.h"

/**
 * *_strcpy - copies the string,
 * including the terminating null byte
 * @dest: buffer to copy the string to
 * @src: the source string to copy
 *
 * Return: a pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
