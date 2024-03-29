#include "main.h"

/**
 * _memset - fill a memory block with a specific value
 * @s: memory starting address to be filled
 * @b: desired value
 * @n: bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
