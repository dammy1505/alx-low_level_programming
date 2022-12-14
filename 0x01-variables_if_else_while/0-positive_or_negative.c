#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -assigns a random number to int n eachtime
 * it executes and prints it
 * Return: always 0 is success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
