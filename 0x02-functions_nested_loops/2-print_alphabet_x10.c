#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - enables the printing of 10 times the alphabet
 * then a new line is followed
 * Returns: nothing as a void is used
 */

void print_alphabet_x10(void)
{
	int repeat = 0 , letter;

	while (repeat < 10)
	{
		char letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		repeat++;
	}
}
