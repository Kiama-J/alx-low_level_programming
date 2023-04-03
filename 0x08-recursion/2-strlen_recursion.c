#include "main.h"

/**
 * _strlen_recursion - declaration of function
 * @s: the string
 * Description: prints text
 * Return: string length
 */

int _strlen_recursion(char *s);

int main(void)
{
	_strlen_recursion("hello world");
}

/**
 * _strlen_recursion - definition of function
 * @s: the string to measure
 * Description: finds length of a string
 * using recursion
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = _strlen_recursion(s + 1);
		return (length = length + 1);
	}
	return (0);
}
