#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array.
 * if min > max, return NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		retrun (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
		retrun (NULL);

	for (i = 0; min <= max; i++, min++)
		a[i] = min;

	return (a);
}
