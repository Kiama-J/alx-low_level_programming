#include <stdio.h>

/**
 * main - Entry point
 * Description: Outputs a message using syscall fuction
 * Return: Always 0
 */

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long fd = 1;
	long syscall = 1;
	long ret = 0;

	__asm__ ("syscall"
		: "=a" (ret)
		: "a" (syscall),
		"D" (fd),
		"S" (s),
		"d" (1));
	return (1);
}
