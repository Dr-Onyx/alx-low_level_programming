#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - applies function to an array of items
 * @array: an array of integers
 * @size: size of the array
 * @action: pointer to the function to be applied
 *
 * Return: Null void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
