#include "main.h"

/**
 * swap_int - swaps values
 * @a: value 1
 * @b: value 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
