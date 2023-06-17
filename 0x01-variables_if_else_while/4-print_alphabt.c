#include <stdio.h>

/**
 * main - program that prints all alphabet except e,q
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
