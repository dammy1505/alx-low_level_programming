#include "main.h"

/**
 * _islower - checks for lower character
 * Return: 1 if _islower character is lowercase
 * else it returns 0
 * @c: c is an ascii character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
