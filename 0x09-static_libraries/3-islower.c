#include"main.h"

/**
 * _islower - function to check if
 * character is lowercase
 * @c: checks input of function
 * Return: returns 1 if `c` is lowercase
 * otherwise 0
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
