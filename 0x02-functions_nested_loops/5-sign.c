#include "main.h"

/**
 * print_sign - this indicates the sign of the number inputted
 * Return: returns 1 and + if value is positive, 0 if value is zero
 * and -1 if value is negative
 * @n: n is the number for sign to be determined
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
