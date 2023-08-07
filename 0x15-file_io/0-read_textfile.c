#include "main.h"

/**
 * read_textfile - function that reads a text file
 *	and prints it to the POSIX standard output.
 *
 * @filename: the name of the file
 * @letters: number of letters should read, print
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_write;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1 || !filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	n_read = read(fd, buff, letters);
	n_write = write(STDIN_FILENO, buff, n_read);

	close(fd);
	free(buff);
	return (n_read);
}
