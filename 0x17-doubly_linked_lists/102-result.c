#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * main - function check if palindrome or not
 *
 * Return: true on Success
 */
bool is_palindrome(int value)
{
	char str[20];
	int len, i;

	sprintf(str, "%d", value);
	len = strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i -1])
			return (false);
	}
	return (true);
}
/**
 * main - function main
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i, j, result, palind = 0;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			result = i * j;
			if (is_palindrome(result) && result > palind)
				palind = result;
		}
	}
	printf("The largest palindrome made from the product of two 2-digit numbers is: %d\n", palind);
	return (0);
}
