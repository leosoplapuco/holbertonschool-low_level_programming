#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - principal function.
* @array: value.
* @size: value.
* @action: value.
* Return: zero on succes.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
