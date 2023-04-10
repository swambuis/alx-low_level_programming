#include "main.h"

/**
 * binary_to_uint - does the conversion from binary to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c;

	c = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		c = 2 * c + (b[a] - '0');
	}
	return (c);
}

