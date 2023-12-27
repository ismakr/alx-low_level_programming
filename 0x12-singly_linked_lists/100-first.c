#include <stdio.h>
/**
 * _print_before - before the main function is executed.
 * Return: void
 */
void _print_before(void) __attribute__((constructor));
void _print_before(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
