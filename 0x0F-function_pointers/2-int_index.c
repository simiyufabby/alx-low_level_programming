#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: Index of the first matching element, or -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
