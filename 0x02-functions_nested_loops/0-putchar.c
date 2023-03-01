#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * print_char - function declaration
 * Description: Prints _putchar, followed by a new line
 * Return: has no return value
 */

char print_char(void);

/**
 * main - Entry point
 * Description: calls print_char()
 * Return: 0
 */

int main(void)
{
	print_char();
	return (0);
}

/**
 * print_char - function defn
 * Description: prints out '_putchar'
 * Return: has no return value
 */

char print_char(void)
{
	char my_string_array[] = "_putchar\n";
	int index = 0;

	while (my_string_array[index] != '\0')
	{
		char letter = my_string_array[index];

		putchar(letter);
		index++;
	}
	return (0);
}
