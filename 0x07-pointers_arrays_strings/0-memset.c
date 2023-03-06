#include "main.h"

/**
 * _memset - fill memory with const
 * @s: space of the memory
 * @b: bytes
 * @n: memory area
 *
 * Return: return ponter to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
