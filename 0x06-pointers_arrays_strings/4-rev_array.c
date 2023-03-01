#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int z;
	int niyi;

	for (z = 0; z < n--; z++)
	{
		niyi = a[z];
		a[z] = a[n];
		a[n] = niyi;
	}
}
