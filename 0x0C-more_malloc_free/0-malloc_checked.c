#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks malloc
 * @b: integer to check
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{

	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
