#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - enables the printing of lowercase of the alphabets
 * followed by a new line
 * Return: 0 otherwise is error
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
