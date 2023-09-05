#include "main.h"

/**
 * check_elf - check if it is elf file or not
 *
 * @ptr: magic.
 * Return: 1 if ELF file, 0 if not
 */
int check_elf(char *ptr)
{
	int add = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (add == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	/*Task not completed*/
	int fd, n_read;
	char ptr[27];

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

	n_read = read(fd, ptr, 27);
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "File can't be read\n");
		exit(98);
	}

	if (check_elf(ptr) == 0)
	{
		dprintf(STDERR_FILENO, "File is not an ELF file\n");
		exit(98);
	}

	close(fd);
	return (0);
}
