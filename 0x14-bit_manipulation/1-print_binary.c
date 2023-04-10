#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int a;
	int tally = 0;

	unsigned long int now;

	for (a = 63; a >= 0; a--)
	{
		now = n >> a;

		if (now & 1)
		{
			_putchar('1');
			tally++;
		}
		else if (tally)
			_putchar('0');
	}
	if (!tally)
		_putchar('0');
}
