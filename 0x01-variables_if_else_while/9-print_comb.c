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
if (i == 9)
{
putchar(i + '0');
}
else
{
putchar(',');
putchar(' ');
}
}
return (0);
}
