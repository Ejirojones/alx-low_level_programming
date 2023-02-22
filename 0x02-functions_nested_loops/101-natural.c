#include <stdio.h>

/**
 * main - multiples of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;

for (i = 3 ; i < 10 ; i++)
{
if ((1 % 3 == 0) || (i % 5 == 0))
{
sum = sum + i;
}
}
printf("%d\n", sum);
return (0);
}
