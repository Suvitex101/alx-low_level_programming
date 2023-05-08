#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *my_buffer(char *name);
void end_file(int ef);

/**
 * my_buffer - Gives 1024 bytes for a buffer.
 * @name: Name of the file storing char
 * Return: return buffer
 */
char *my_buffer(char *name)
{
	char *make;

	make = malloc(sizeof(char) * 1024);

	if (make == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", name);
		exit(99);
	}

	return (make);
}

/**
 * end_file - file descriptors close
 * @ef: descriptor to be closed
 */
void end_file(int ef)
{
	int c;

	c = close(ef);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ef);
		exit(100);
	}
}

/**
 * main - Copies file content to another file.
 * @argc: The number of arguments
 * @argv: Array of pointers to the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int start, run, rwt, w;
	char *name;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	name = my_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	rwt = read(start, name, 1024);
	run = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || rwt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(name);
			exit(98);
		}

		w = write(run, name, rwt);
		if (run == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(name);
			exit(99);
		}

		rwt = read(start, name, 1024);
		run = open(argv[2], O_WRONLY | O_APPEND);

	} while (rwt > 0);

	free(name);
	end_file(start);
	end_file(run);

	return (0);
}
