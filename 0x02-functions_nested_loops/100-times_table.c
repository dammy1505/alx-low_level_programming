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
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else if (product >= 10 && product < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((tens % 10) + '0');
				_putchar(ones + '0');
			}
			else if (product > 99 && product < 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 100 + '0');
				_putchar((tens % 10) + '0');
				_putchar(ones + '0');
			}
		}
			_putchar('\n');
		}
	}
}
