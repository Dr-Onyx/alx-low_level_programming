#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of previous memory
 * @new_size: new size of memory in bytes
 *
 * Return: pointer to the reallocated memory if successful
 * NULL, otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *tmp;

	if (new_size == old_size)
		return (ptr);
	tmp = realloc(ptr, new_size);
	if (tmp == NULL)
		return (NULL);

	return (tmp);

}
