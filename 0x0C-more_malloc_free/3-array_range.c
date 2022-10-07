#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: lagrest value in the array
 * Return: pointer to the address of the memory block
 */

int *array_range(int min, int max)
{
	int i,l;
	int *a;

	if (min>max)
		return (NULL);
	l = max -min + 1;
	a = malloc(sizeof(int) * 1);
	if (a  == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
