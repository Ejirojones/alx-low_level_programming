#include "main.h"

/**
 * _abs - absolute integers
 * @x: parameter
 * Return: 0
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = -(x);
	}
	else if (x >= 0)
	{
		x = x;
	}
	return (x);
}
