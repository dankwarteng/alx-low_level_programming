#include "main.h"

/**
 * print_binary prints the binary representation of a number.
 * @n:decimal digit to convert in binary.
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int y;

	for (x = 63; x >= 0; x--)
	{
		y = n >> x;

		if (y & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
