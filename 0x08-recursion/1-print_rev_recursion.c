#include "main.h"

/**
 * _print_rev_recursion - prints a string in revers.
 * @s: The string to be printef.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
