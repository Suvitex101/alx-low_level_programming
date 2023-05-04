#include "main.h"

/**
 *get_bit - function that returns the value of a bit.
 *@n: value of the bit
 *@index: the index, starting from 0 of the bit you want to get
 *Return: the value of the bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);

}
