#include "main.h"

/**
 * print_numbers - this is main function that prints all numbers to 9
 * starting from 0
 * Return: void so returns nothing
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
