#include "main.h"

/**
 * get_bit - returns value of bit
 * @index: index, starting from 0 of the bit you want to get
 * @n: number to search
 * Return:  value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
		return (-1);
	bitvalue = (n >> index) & 1;

	return (bitvalue);
}
