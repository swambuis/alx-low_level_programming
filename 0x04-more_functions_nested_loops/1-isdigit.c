#include "main.h"
/*
 * _isdigit - check if character is a digit
 * @x: number to be checked
 * Return: character that shall be a digit 1 and anything else will be 0
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
