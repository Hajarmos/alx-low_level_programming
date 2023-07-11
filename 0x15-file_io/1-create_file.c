#include "main.h"


/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 * (file can not be created,
 * file can not be written,
 * write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		wr = write(op, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(op);
	return (1);
}
