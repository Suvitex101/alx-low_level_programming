#include "main.h"

/**
 * leet - Entry Point
 * @str: Variable
 * Return: Always 0
 */

char *leet(char *str)
{
	int z, x;
	char a[] = "aeotl";
	char b[] = "AEOTL";
	char c[] = "43071";

	for (z = 0; str[z] != '\0'; z++)
	{
		for (x = 0; x < 5; x++)
		{
			if (str[z] == a[x] || str[z] == b[x])
			{
				str[z] = c[x];
				break;
			}
		}
	}
	return (str);
}
