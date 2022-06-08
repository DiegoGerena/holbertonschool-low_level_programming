#include <stdio.h>

/**
 * main - Entry point to run a program that prints the alphabet
 * in lower case followed by newline
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	for (CH = 'A'; CH <= 'Z'; CH++)
	putchar(CH);
	putchar ('\n');

	return (0);
}
