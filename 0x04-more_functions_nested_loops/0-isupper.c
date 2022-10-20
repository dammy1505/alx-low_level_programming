#include "main.h"

/**
 * _isupper - this function checks for uppercase character
 * Return: it returns 1 if character is uppercase else 0
 * @c: c is the character to be analysed
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
