#include "main.h"
int palind_check(char *s, int i);
int str_len(char *s);


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
	return (palind_check(s, 0));
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
	if (*(s + i) == *(s + str_len(s - i - 1)) && i < str_len(s) / 2)
		return (1);
	else
		return (0);
	return (palind_check(s, i + 1));
}

/**
 * str_len - function return length of string
 *
 * @s: arguement of string
 *
 * Return: length of string
 */
int str_len(char *s)
{
	if (*s != '\0')
		return (1 + str_len(s + 1));
	else
		return (0);
}
