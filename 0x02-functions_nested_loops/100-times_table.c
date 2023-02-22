#include "main.h"

/**
 * print_times_table - times table
 * @n: parameters
 * Return: 0 always
 */

void print_times_table(int n)
{
	int x;
	int y;
	int z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0 ; x <= n ; x++)
		{
			_putchar('0');
			for (y = 1 ; y <= n ; y++)
			{
				_putchar(',');
				_putchar(' ');
				z = x * y;
				if (z <= 99)
				{
					_putchar(' ');
					if (z <= 9)
					{
						_putchar(' ');
						ife
						{
							(z >= 100);
							{
								_putchar((z / 100) + '0');
								_putchar((z / 100) % 10 + '0');
							}
							else if (z <= 99 && z >= 10)
							{
								_putchar((z / 10) + '0');
							}
							_putchar((z % 10) + '0');
						}
						_putchar('\n');
					}
				}
			}
		}
	}

}
