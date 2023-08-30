#include "main.h"

/**
 * _print_rev_recursion - prints a string
 * @s: pointer to the string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
