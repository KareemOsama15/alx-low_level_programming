#include <stdio.h>

/**
 * main - program that prints all single digits in base 10
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
