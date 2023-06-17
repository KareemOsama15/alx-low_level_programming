#include <stdio.h>

/**
 * main - program
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i = 48;
	int e = 49;

	while (e > i)
	{
		putchar(i);
		putchar(e);
		e++;
		if (e == 57)
		{
			i++;
		}
		if (e == 57 && i == 56)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
