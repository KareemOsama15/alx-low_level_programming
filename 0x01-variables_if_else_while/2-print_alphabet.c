#include <stdio.h>

/**
 * main - program print alphabet in lower case
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
