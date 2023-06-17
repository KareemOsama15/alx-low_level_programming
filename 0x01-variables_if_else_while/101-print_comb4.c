#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 3 digits
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int x = 48, y, z;

	while (x < 58)
	{
		y = 48;

		while (y < 58)
		{
			z = 48;

			while (z < 58)
			{
				if (z > y && z > x && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if (x == 55 && y == 56 && z == 57)
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

	putchar('\n');
	return (0);
}
