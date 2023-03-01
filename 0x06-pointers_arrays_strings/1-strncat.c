#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the final destination
 * @src: initial source
 * @n: amount of bytes used
 * Return: return pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, z = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (z < n)
	{
		*(dest + a) = *(src + z);
		if (*(src + z) == '\0')
			break;
		a++;
		z++;
	}
	return (dest);
}
