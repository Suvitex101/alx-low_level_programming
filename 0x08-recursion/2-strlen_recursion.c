#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: string to count
 * Return: always return 0
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a = _strlen_recursion(s + 1);
		return (a += 1);
	}
	return (0);
}
