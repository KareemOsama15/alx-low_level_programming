#include <stdio.h>

/**
 * main - program that prints digits in hexadecimal
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char hexadec[16] = "0123456789abcdef";

	int i = 0;

	while (i <= 15)
	{
		putchar(hexadec[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
