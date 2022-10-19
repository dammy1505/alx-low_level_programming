#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table below 15
 * @n: n is the integer to which the times table is to be carried out
 * Return: returns zero as its voided
 */

void print_times_table(int n)
{
	int row, column, product, tens, ones;

	if (n > 0 && n < 15)

	{
		for (row = 0; row <= n; row++)
		{
		for (column = 0; column <= n; column++)
		{
			product = row * column;
			tens = product / 10;
			ones = product % 10;
			if (column == 0)
			{
				_putchar('0');
			}
			else if (column < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		}
	}
	else
	{
		printf("%c", ' ');
	}
}
