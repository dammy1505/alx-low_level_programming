#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - this is main function that ptints all numbers to 98
 * starting from number n
 * @n: is the first number to print out from
 * Return: void so returns nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
