#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 *
 * Return: Pointer to newly created array, NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Calculate array size */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
