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
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
