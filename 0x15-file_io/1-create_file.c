#include "main.h"

/**
 * create_file - create a file.
 * @filename: pointer to the name of the file
 * @text_content: is a NULL terminated string to write to the file
 * Return: -1 or 1
 **/
int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
		wr = write(op, text_content, i);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
