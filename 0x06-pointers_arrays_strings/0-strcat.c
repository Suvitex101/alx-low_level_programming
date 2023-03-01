#include "main.h"

/**
 * *_strcat - function to connute strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: return the value of dest
 */

char *_strcat(char *dest, char *src)
{
	int niyi;
	int jos;

	niyi = 0;
	jos = 0;

	while (dest[niyi] != '\0')
	{
		niyi++;
	}
	while (src[jos] != '\0')
	{
		dest[niyi] = src[jos];
		jos++;
		niyi++;
	}

	dest[niyi] = '\0';
	return (dest);
}
