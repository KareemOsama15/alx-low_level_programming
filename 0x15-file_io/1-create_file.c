#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: the name of the file
 * @text_content: NULL terminated string to
 *		write to the file
 * Return: 1 i f success , -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	fd = open(*filename, O_WRONLY | O_CREATE | O_TRUNC, 0600);
	if (fd == -1 || !filename)
		return (-1);
	if (!text_content)
		text_content = "";

	for (len = ; text_content[len]; len++)
		;
	wr = write(fd, text_content, len);

	close(fd);
	return (1);
}
