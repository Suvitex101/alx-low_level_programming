#include "main.h"

/**
 * _puts_recursion - prints a string followed bt a new line
 * @s: a string
 * Return: always return 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);

}
