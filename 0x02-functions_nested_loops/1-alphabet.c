#include <stdio.h>
#include "main.h"

/**
 * main - prints lowercase if the alphabets
 * followed by a new line
 * Return: 0 otherwise is error
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++);
	{
		_putchar(letter);
	}
	_putchar('\n');
}
