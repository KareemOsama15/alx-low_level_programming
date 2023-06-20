#include "main.h"

/**
 * main - program that prints word "_putchar" throught function _putchar
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
