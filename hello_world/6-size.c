#include <stdio.h>
/**
* main - a program to print the size the size of
*various types on the computer it is compiled and run on.
* Return: value of 0
**/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(lli));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}