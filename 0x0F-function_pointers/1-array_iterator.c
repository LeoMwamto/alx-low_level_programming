#include "function_pointers.h"

/**
 * @array: array
 * @size: size of array
 * @action: oiinter to the executed function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
		if (array == NULL || action == NULL)
			return;

		while  (size-- > 0)
		{
			action(*array);
			array++;
		}
}
