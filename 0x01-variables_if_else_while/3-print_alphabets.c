#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase then UPPERCASE
 * Return: Always 0
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	char letTER = 'A';
	
	for (letTER = 'A'; letTER <= 'Z'; letTER++)
	{
		putchar(letTER);
	}
	putchar('\n');
	return (0);
}
