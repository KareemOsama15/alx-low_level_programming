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

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e > i)
			{
				putchar(i);
				putchar(e);
			
				if (i == 56 && e == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	return (0);
}
