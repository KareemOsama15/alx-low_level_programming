#include <stdio.h>

/**
 * main - program that prints all possible combinations of 2 2-digit numbers
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int w = 48, x, y, z;

	while (w < 58)
	{
		x = 48;
		while (x < 58)
		{
			y = 48;
			while (y < 58)
			{
				z = 48;
				while (z < 58)
				{
					if (y + z > x + w)
					{
						putchar(w);
						putchar(x);
						putchar(' ');
						putchar(y);
						putchar(z);
					if (z == 57 && y == 57 && x == 56 && w == 57)
					{
						break;
					}
						putchar(',');
						putchar(' ');
					}
					z++;
				}
				y++;
			}
			x++;
		}
		w++;
	}
	return (0);
}
