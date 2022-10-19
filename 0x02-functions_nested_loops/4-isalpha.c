#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if _isalpha character is true
 * else it returns 0
 * @c: c is an ascii character
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
