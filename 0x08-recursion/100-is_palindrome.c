#include "main.h"
int palind_check(char *s, int i);

/**
 * is_palindrome - calls function that returns 1
 *      if a string is a palindrome and 0 if not
 *
 * @s: arguement of string
 *
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	return (palind_check(char *s, 0));
}

/**
 * palind_check - calls function that returns 1
 *      if a string is a palindrome and 0 if not
 *
 * @s: arguement of string
 * @i: numbers for count
 * Return: number prime or not
 */
int palind_check(char *s, int i)
{
	int n = 0, j = 0;

	while (*(s + n) != '\0')
		n++;
	j = n \ 2;
	if (i <= j)
	{
		if (*(s + i) == *(s + n - 1 - i))
			return (1);
		else if (*(s + i) != *(s + n - 1 - i))
			return (0);
		else
			return (palind_check(*s, i + 1));
	}
}
