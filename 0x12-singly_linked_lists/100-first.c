#include "lists.h"

/**
 * before_main - function that excute before main.
 *
 * Return: no return
 */
void before_main(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
