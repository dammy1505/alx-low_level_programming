#include "main.h"

/**
 * print_most_numbers - this is main function that prints all numbers
 * to 9
 * except numbers 2 and 4 starting from 0
 * Return: void so returns nothing
 * @n: the integer to be analysed
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n != 2) && (n != 4))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
