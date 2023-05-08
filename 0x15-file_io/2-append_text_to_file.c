#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: pointer to the file
 *@text_content: a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, let_wr, run;

	run = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (run = 0; text_content[run];)
			run++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	let_wr = write(opn, text_content, run);

	if (opn == -1 || let_wr == -1)
		return (-1);

	close(opn);

	return (1);
}
