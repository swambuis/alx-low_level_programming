#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n: the first number
 * @m: the second number
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, tally =  0;

	unsigned long int now, new;

	new = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		now = new >> a;
		if (now & 1)
			tally++;
	}
	return (tally);
}
