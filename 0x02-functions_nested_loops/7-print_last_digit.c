#include "main.h"

/**
 * print_last_digit - this prints the last digit of any inputted number
 * Return: this returns the integer which is the last digit of the number
 * @t: t is an integer to be analysed
 */

int print_last_digit(int t)
{
	int lastDigit = t % 10;

	if (t < 0)
		lastDigit = lastDigit * -1;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
