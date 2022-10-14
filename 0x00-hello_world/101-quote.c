#include <stdio.h>
#include <unistd.h>
#include <stderr.h>

/**
 * main - prints exactly what we were told to write
 * followed by a new line, to standard error
 * Return: always 0 (success)
 */

int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n" 59);
	return (1);
}
