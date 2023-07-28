#include "lists.h"

/**
 * before_main - function that excute before main.
 *
 * Return: no return
 */
void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
