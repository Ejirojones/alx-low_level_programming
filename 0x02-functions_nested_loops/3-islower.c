#include "main.h"

/**
 * _islower - checking for lower cases
 * @c: parameter to be printed
 * Return: Returns 1 if c is lowercase and Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
