#include <stdio.h>

/**
 * main - Entry point to run a program that prints the alphabet
 * in lower case followed by newline
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

	}

	putchar ('\n');

	return (0);
}
