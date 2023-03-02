#include "main.h"

/**
 * print_number - prints an integer
 * @n: input an integer
 * Return: no return here
 */
void print_number(int n)
{
	unsigned int e, y, out;

	if (n < 0)
	{
		_putchar(45);
		e = n * -1;
	}
	else
	{
		e = n;
	}

	y = e;
	out = 1;

	while (y > 9)
	{
		y /= 10;
		out *= 10;
	}

	for (; out >= 1; out /= 10)
	{
		_putchar(((e / out) % 10) + 48);
	}
}
