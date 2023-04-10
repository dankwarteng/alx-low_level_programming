#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0.
 * @n: Pointer to the number to change.
 * @index: index starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number = *n;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	number &= ~(1 << index);
	*n = number;

	return (1);
}
