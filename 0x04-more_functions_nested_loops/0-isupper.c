#include "main.h"

/**
 * _isupper - declaration of function
 * Description: check case of 'c'
 * @c: character to test
 * Return: Returns 1 if c is uppercase, 0 if false
 */

int _isupper(int c);

/**
 * _isupper - definition of function
 * Description: tests case of 'c'
 * @c: character to test
 * Return: 1 if upper 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
