#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	c = a + n;

	sout = malloc(c + 1);

	if (sout == NULL)
		return (NULL);

	for (d = 0; d < c; d++)
	{
		if (d >= a && d - a < n)
			sout[d] = s2[d - a];
		else
			sout[d] = s1[d];
	}
	sout[d] = '\0';

	return (sout);
}
