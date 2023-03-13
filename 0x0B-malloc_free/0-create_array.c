#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of an array
 * @c: stored char
 * Return: always return 0
 */
char *create_array(unsigned int size, char c)
{
	char *Niyi;
	unsigned int p;

	if (size == 0)
		return (NULL);

	Niyi = malloc(sizeof(c) * size);

	if (Niyi == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		Niyi[p] = c;

	return (Niyi);
}
