#include "main.h"

/**
 *get_endianness - function that checks the endianness
 *Return: always 0
 */

int get_endianness(void)
{
	int run = 1;
	char *edn = (char *)&run;

	if (*edn == 1)
		return (1);

	return (0);
}
