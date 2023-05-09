#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0 if seccess or:
 * 97 if  the number of argument is not the correct one
 * 98 if file_from does not exist, or if you can not read it
 * 99 if you can not create or if write to file_to fails
 * 100 if you can not close a file descriptor
 */

int main(int argc, char **argv)
{
	int file_from, file_to, rd, wr;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]),
			exit(98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		if (close(file_from) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to),
				exit(100);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	rd = read(file_from, &buffer, 1024);
	while (rd > 0)
	{
		wr = write(file_to, &buffer, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99);
		rd = read(file_from, &buffer, 1024);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n",argv[1]),
			exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n",argv[2]),
			exit(100);
	if (rd == -1)
		 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			 exit(98);
	return (0);
}
