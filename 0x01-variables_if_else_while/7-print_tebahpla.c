#include <stdio.h>

/**
 * main - program prints alphabet in reverse
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 27; i > 1; i--)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
