#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new space in the memory
 * @str: a string
 * Return: always return 0
 */
char *_strdup(char *str)
{

	char *Niyi;

	if (str == NULL)
		return (NULL);

	Niyi = malloc(strlen(str) + 1);

	if (Niyi == NULL)
		return (NULL);

	strcpy(Niyi, str);

	return (Niyi);

}
