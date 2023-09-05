#include "main.h"

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv)
{
	int fd, n_read, len = 100;
	char *buffer;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "File can't be open\n");
		exit(98);
	}

	n_read = read(fd, buffer, len);
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "File can't be read\n");
		exit(98);
	}

	close(fd);
	return (0);
}
