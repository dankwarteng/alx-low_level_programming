#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the Converted number.
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int val = 0;
	int x;

	if (b == NULL)
		return (0);

	int x = 0;

	while (b[x] != '\0')
		if (b[x] != '0'  &&  b[x] != '1')
	 x++;
			return (0);
	while (b[x] != '\0')
	{
	val *= 2;
	if (b[x] == '1')
	val += 1;
	x++;
	}
	return (val);
}
