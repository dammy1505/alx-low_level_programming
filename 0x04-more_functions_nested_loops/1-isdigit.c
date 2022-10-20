#include "main.h"

/**
 * _isdigit - checks for presence of interger
 * Return: 1 if integer exists else 0
 * @c: is the integer looked for
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
