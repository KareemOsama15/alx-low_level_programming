#include "main.h"

/**
 * append_text_to_file - function appends
 *	text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: NULL terminated string to
 *		write to the file
 * Return: 1 i f success , -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
