#include "main.h"

/**
 * print_last_digit - printing last digit
 * @y: assignment
 * Return: last digit
 */

int print_last_digit(int y)
{
	int x;

	x = y % 10;
	if (x < 0)
	{
		x = -(x);
	}
	_putchar(x + '0');
	return (x);
}
