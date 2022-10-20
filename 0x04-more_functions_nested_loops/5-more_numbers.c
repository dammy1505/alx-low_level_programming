#include <stdio.h>
#include "main.h"

/**
 * more_numbers - enables the printing of 10 times of numbers 0 to 14
 * then a new line follows accordingly
 * Returns: nothing is returned since it voided
 */

void more_numbers(void)
{
	int repeat = 0;
	int number = 0;

	while (repeat < 10)
	{
		number = 0;
		while (number <= 14)
		{
			_putchar(number);
			number++;
		}
	_putchar('\n');
	repeat++;
	}
}
