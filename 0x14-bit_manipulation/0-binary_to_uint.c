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

	if (!b)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
		if (b[x]  != '0' && b[x] != '1')
			return (0);
			
	for (x = 0; b[x] != '\0'; x++)
	{
	val *= 2;
	if (b[x] == '1')
	val += 1;
	
	}
	return (val);
}
