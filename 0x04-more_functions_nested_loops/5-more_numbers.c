#include <stdio.h>
#include "main.h"

/**
 * more_numbers - enables the printing of 10 times of numbers 0 to 14
 * then a new line follows accordingly
 * Returns: nothing is returned since it voided
 */

void more_numbers(void)
{
	int repeat, number;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + 48);
				_putchar((number % 10) + 48);
			}
		}
	_putchar('\n');
	}
}
