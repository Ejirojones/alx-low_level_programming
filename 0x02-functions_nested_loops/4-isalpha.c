#include "main.h"

/**
 * _isalpha - letter, lower or alphabets
 * @c: parameter
 * Return: 0 0r 1
 */

int _isalpha(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
