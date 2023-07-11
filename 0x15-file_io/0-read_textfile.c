#include "main.h"


/**
 * read_textfile -  reads a text file
 * and prints it to the POSIX standard output
 * @filename: file name
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write
 * the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, letterrd, letterwr;
	char *ch;

	 op = open(filename, O_RDONLY);
	if (!filename || op == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (!ch)
		return (0);
	letterrd = read(op, ch, letters);
	if (letterrd == -1)
	{
		free(ch);
		return (0);
	}
	letterwr = write(STDOUT_FILENO, ch, letterrd);
	free(ch);
	if (letterwr == -1)
		return (0);
	close(op);
	return (letterwr);
}
