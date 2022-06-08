#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - function is to return print random numbers and state
 *weather number is positive, zero, or negative
 *Return: value of 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	if (n == 0)
		printf("%i is zero\n", n);
	if (n < 0)
		printf("%i is negative\n", n);

	return (0);
}
