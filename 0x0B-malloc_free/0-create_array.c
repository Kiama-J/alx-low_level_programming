#include "main.h"
#include <stdlib.h>

/**
 * create_array - .
 * @size: .
 * @c: .
 * Return: .
 */

char *create_array(unsigned int size, char c)

{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
