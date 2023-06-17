#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int x = 48, y;

	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);

				if (x != 56 && y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
