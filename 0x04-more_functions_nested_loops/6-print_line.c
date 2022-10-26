#include "main.h"

/**
 * print_line - the prototype in main function to print shortest
 * distance between two points in a straight line
 * Return: prints new line if n is 0 and character _ based on
 * value of n for n times
 * @n: n is the number of time _ is to be printed
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar("%d, _", n);
		n++;
	}
	_putchar("\n");
	}
	if (n < 0)
	{
	_putchar("\n");
	}
}
