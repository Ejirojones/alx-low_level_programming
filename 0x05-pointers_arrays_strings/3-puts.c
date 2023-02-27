#include "main.h"

/**
 * _puts - string and new line
 * @str: parameter
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
