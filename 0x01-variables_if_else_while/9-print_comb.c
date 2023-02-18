#include <stdio.h>

/**
 * main - numbers
 *
 * Return: always on 0
 */

int main(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
return (0);
}
