#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: first string
 * @s2: second string
 * Return: return 0 if s1 and s2 are the same
 * another number if not
 */

int _strcmp(char *s1, char *s2)
{
	int z;

	z = 0;
	while (s1[z] != '\0' && s2[z] != '\0')
	{
		if (s1[z] != s2[z])
		{
			return (s1[z] - s2[z]);
		}
		z++;
	}
	return (0);
}
