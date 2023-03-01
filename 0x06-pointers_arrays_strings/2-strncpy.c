#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source
 * @n: amount of bytes from the source
 * Return: always return pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int niyi;

	for (niyi = 0; niyi < n && src[niyi] != '\0'; niyi++)
		dest[niyi] = src[niyi];
	for ( ; niyi < n; niyi++)
		dest[niyi] = '\0';

	return (dest);
}
