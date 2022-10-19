#include <stdio.h>
#include "main.h"

/**
 * main - prints lowercase if the alphabets
 * followed by a new line
 * Return: 0 otherwise is error
 */

void print_alphabet(void);
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
