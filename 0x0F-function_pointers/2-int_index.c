#include "function_pointers.h"
/**
 *int_index - Returns the index of the no in array
 *@array: array
 *@size: no of elements in array
 *@cmp: function pointer
 *
 * Return: 0 Always (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}
