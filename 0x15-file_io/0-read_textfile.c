#include "main.h"

/**
 *read_textfile - function that reads a text file and prints output
 *@filename: pointer to filr name
 *@letters: the letters in the file
 *Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bind;
	ssize_t penDown;
	int opn, red;

	if (filename == NULL)
		return (0);

	bind = malloc(sizeof(char) * letters);
	if (bind == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	red = read(opn, bind, letters);
	penDown = write(STDOUT_FILENO, bind, red);

	if (opn == -1 || red == -1 || penDown == -1 || penDown != red)
	{
		free(bind);
		return (0);
	}

	free(bind);
	close(opn);

	return (penDown);
}
