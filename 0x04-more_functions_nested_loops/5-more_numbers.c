#include "main.h"

/**
 * more_numbers - prints the numbers
 * Return: no return
 */
void more_numbers(void)
{
	int a;
	int b;

	for (for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
