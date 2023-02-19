#include <stdio.h>
/**
 * main - entry point
 * description - prints all single digit number of base 10
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
