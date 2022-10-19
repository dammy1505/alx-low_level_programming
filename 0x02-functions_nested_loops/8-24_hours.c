#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * starting from 00:00 to 23:59
 * Return: returns 0 since its voided
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		hour++;
		while (minute < 60)
		{
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			minute++;
			_putchar('\n');
		}
	}
}
