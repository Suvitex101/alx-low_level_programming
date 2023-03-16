#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	unsigned long num1, num2;
	int i, j;

	if (argc != 3)
	{ printf("Error\n");
		exit(98); }

	for (i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	mul = strtoul(argv[1], NULL, 10);
	num1 = strtoul(argv[2], NULL, 10);
	num2 = mul * num1;

	printf("%lu\n", num2);

	return (0);
}
