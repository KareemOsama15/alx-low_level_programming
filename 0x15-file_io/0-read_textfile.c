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
	char *buffer;
	size_t size_r, size_w;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	size_r = read(fd, buffer, letters);
	size_w = write(STDOUT_FILENO, buffer, size_r);
	if (size_w != size_r)
		return (0);

	close(fd);
	free(buffer);
	return (size_r);
}
