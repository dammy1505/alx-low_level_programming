#include "main.h"

/**
 * print_most_numbers - this is main function that prints all numbers
 * to 9
 * except numbers 2 and 4 starting from 0
 * Return: void so returns nothing
 */
void print_most_numbers(void)
{
	int e = 0;

	for (e = '0'; e <= '9'; e++)
	{
		if ((e != '2') && (e != '4'))
		{
			_putchar(e);
		}
	}
	_putchar('\n');
}
