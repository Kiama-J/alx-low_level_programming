#include "main.h"

/**
 * _print_rev_recursion - declaration of function
 * @s: the string
 * Return: void
 */

void _print_rev_recursion(char *s);

/**
 * _print_rev_recursion - definition of function
 * @s: the string to recurse through
 * Description: prints a string in reverse using recursion
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
