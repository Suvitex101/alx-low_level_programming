#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to an unsigned int.
 *@b: pointer to the string
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int all = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		all = (all << 1) | (b[i] - '0');

	}
	return (all);

}
