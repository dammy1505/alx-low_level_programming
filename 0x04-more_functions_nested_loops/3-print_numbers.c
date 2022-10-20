#include "main.h"
#include <stdio.h>

/**
 * print_numbers - this is main function that prints all numbers to 9
 * starting from 0
 * Return: void so returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
