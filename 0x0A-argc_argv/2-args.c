#include <stdio.h>

/**
 * main - entry point
 * @argc: n args
 * @argv: arr args
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	int niyi;

	for (niyi = 0; niyi < argc; niyi++)
		printf("%s\n", argv[niyi]);
	return (0);
}
