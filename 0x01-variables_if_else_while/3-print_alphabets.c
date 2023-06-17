#include <stdio.h>

/**
 * main - program print alphabet upper and lower case
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char chr[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 52; i++)
	{
		putchar(chr[i]);
	}
	putchar('\n');
	return (0);

}
