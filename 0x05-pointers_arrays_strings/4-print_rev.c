#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: prints in reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int x;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (x = length ; x > 0 ; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
