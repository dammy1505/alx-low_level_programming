#include "main.h"

/**
 * print_numbers - this is main function that prints all numbers to 9
 * starting from 0
 * Return: void so returns nothing
 */

void print_numbers(void)
{
	int e;

	for (e = '0'; e <= '9'; e++)
	{
		_putchar(e);
	}
	_putchar('\n');
}
