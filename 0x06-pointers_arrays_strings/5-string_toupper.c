#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int niyi;

	niyi = 0;
	while (n[niyi] != '\0')
	{
		if (n[niyi] >= 'a' && n[niyi] <= 'z')
			n[niyi] = n[niyi] - 32;
		niyi++;
	}
	return (n);
}
