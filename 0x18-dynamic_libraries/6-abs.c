#include"main.h"

/**
 * _abs - function that computes the absolute
 * value of an int
 * @i: takes input valaues for the function
 * Return: Always 0 (Success)
 */

int _abs(int i)

{
	if (i < 0)
		i = (-1) * i;

	return (i);

}
